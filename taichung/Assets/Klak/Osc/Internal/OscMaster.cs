//
// OscKlak - OSC (Open Sound Control) extension for Klak
//
// Copyright (C) 2016 Keijiro Takahashi
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
using System;

namespace Klak.Osc
{
    /// OSC master handler
    public static class OscMaster
    {
        #region Public Members

        public static MessageHandler messageHandler {
            get { return ServerInstance.messageHandler; }
        }

        #endregion

        #region Private Members

        static OscServer _server;

        static OscServer ServerInstance {
            get {
                if (_server == null) {
                    int[] portsToTry = { 12012, 12013, 12014 }; // List of ports to try
                    foreach (var port in portsToTry) {
                        try {
                            _server = new OscServer(port);
                            _server.Start();
                            break;
                        } catch (System.Net.Sockets.SocketException) {
                            _server = null; // Try the next port
                        }
                    }

                    if (_server == null) {
                        throw new Exception("Failed to bind to any of the specified ports.");
                    }
                }
                return _server;
            }
        }

        #endregion

        public static void StopServer()
        {
            if (_server != null)
            {
                try
                {
                    _server.Dispose();
                }
                catch (System.Net.Sockets.SocketException ex)
                {
                    UnityEngine.Debug.LogWarning($"[OscMaster] SocketException during server disposal: {ex.Message}");
                }
                catch (Exception ex)
                {
                    UnityEngine.Debug.LogWarning($"[OscMaster] Exception during server disposal: {ex.Message}");
                }
                finally
                {
                    _server = null;
                }
            }
        }
    }
}

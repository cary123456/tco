using UnityEngine;
using System.Collections;

public class NoteTrigger : MonoBehaviour
{
    public MidiChannel channel = MidiChannel.Ch1;
    public int noteNumber = 48;
    public float velocity = 0.9f;
    public float delay = 2.0f;
    public float length = 0.1f;
    public float interval = 1.0f;
    public bool trigger;
    public bool onetime;
    float scale;

    public bool trigger2;
    public bool onetime2;
    public int noteNumber2 = 49;
    public float velocity2 = 0.9f;

    void Update ()
    {
        MidiBridge.instance.Warmup();
        if (trigger)
        {
            if (onetime)
            {
                MidiOut.SendNoteOn(channel, noteNumber, velocity);
                onetime = false;
            }
            MidiOut.SendNoteOff(channel, noteNumber);

        }

        if (trigger2)
        {
            if (onetime2)
            {
                MidiOut.SendNoteOn(channel, noteNumber2, velocity2);
                onetime = false;

            }
            MidiOut.SendNoteOff(channel, noteNumber2);
        }

    }
}

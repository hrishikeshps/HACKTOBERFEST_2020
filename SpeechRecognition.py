# python program to Speech Recognition
import speech_recognition as sr

def command_is():
    rec = sr.Recognizer()
    with sr.Microphone() as source:
        print("You Listenning.....")
        rec.pause_threshold = 0.6
        audio = rec.listen(source)

    try:
        ask = rec.recognize_google(audio, language="en-us")
        print(f"You asking : {ask}")
    except Exception:
        print("Say that Again.....")
        return ""

    return ask

command_is()

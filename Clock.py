import time


def show_date_time():
    print(time.asctime())

def countdown(t): 
    
    while t: 
        mins, secs = divmod(t, 60) 
        timer = '{:02d}:{:02d}'.format(mins, secs) 
        print(timer, end="\r") 
        time.sleep(1) 
        t -= 1
    print("Time Is Finished")
      
def set_timer():
    Time = int(input("Enter the time in a second : "))
    countdown(Time)

def count():
    print('Press "Ctrl + z" to stop time')
    t = 1
    while True: 
        mins, secs = divmod(t, 60) 
        timer = '{:02d}:{:02d}'.format(mins, secs) 
        print(timer, end="\r") 
        time.sleep(1) 
        t += 1

def main():
    print("1.) Show Date And Time")
    print("2.) Set Timer")
    print("3.) Stop Watch")
    
    user = int(input("Choose Options : "))
    if(user==1):
        show_date_time()
    elif(user==2):
        set_timer()
    elif(user==3):
        count()
    else:
        print("invalid key pressed")
main()

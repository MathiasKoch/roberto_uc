import serial
import sys

# requires pyserial

port = 'COM19'

# use the 'write' command and check its output
def writetest(n):
    ser = serial.Serial(port, timeout=0.1)
    i = 0
    next = '0';
    ser.write("\r")
    ser.readline()
    ser.write("\r")
    ser.readline()
    ser.readline()
    ser.write("write\r")
    ser.readline()
    while i < n:
        c = ser.read()
        if not c:
            continue
        if(c != next):
            print('{c} != {n}'.format(c=c, n=next))
        else:
            sys.stdout.write('.')
        if next == '9':
            next = 'a'
        else:
            if next == 'f':
                next = '0'
            else:
                next = chr(ord(next) + 1);
        i = i + 1
    ser.write("\r\n")
    ser.close()

teststr = 'l039un3vw[0uy3w5[0tyuhj0[49uyj3w[05eyu0[9euv[pe79uvm3w[097u3078'

# repeatedly write the test string and delete it
# while making sure the correct characters are echo'ed back
def echotest(n):
    ser = serial.Serial(port, timeout=0.1)
    i = 0
    next = '0';
    ser.readline()
    while i < n:
        ser.write(teststr)
        c = ser.read(len(teststr))
        if(c != teststr):
            sys.stdout.write('!')
        j = len(teststr)
        while j:
            ser.write('\b');
            c = ser.read(3)
            if(c != '\b \b'):
                sys.stdout.write('@')
            j = j - 1
        sys.stdout.write('.')
        i = i + 1
    ser.write("\r\n")
    ser.close()

wtN = 5000
etN = 5000

print("Running device to host test {d} iterations...".format(d=wtN))
writetest(wtN)
print("\nRunning echo test {d} iterations...".format(d=etN))
print("Test String Size: {d}".format(d=len(teststr)))
echotest(etN)
print("\nDone.")
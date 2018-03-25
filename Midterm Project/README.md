# CIM 542 Midterm (PC switch document)


## Inspiration

### A few weeks ago, I watched a video that a man built a PC tower using Lego. I was wondering how could he turn it on without a button. So, I decide to make a remote switch for the PC. 

## Components used in this project

* Arduino Uno
* Breadboard
* Wires
* LED light
* Infrared remote
* PC Motherboard
* Female wire connector



## Step 1: Wire up the Uno and make the LED work with a physical button.
### I had to make the LED light work to make sure the curcuit work, and then connected it to my PC motherboard and used the physical button to turn on the PC. However, the way I turn on the PC is different from the way I control the LED light. I found that "LOW" would let the electricity go through the curcuit, but it does not provide constant electricity go through the motherboard, which leads the PC turns off immediately. "HIGH", on the other hand, gives the PC constant electricity and the PC keeps working. Therefore, I have to press the button twice to turn on the PC. First press is "LOW", and the second press is "HIGH". 
### You can see the PICTURE here [LED_Button](https://github.com/mengxiangjie/CIM542/blob/master/Midterm%20Project/pictures/IMG_3040.JPG)
### You can see the CODE here [Physical Button Control LED](https://github.com/mengxiangjie/CIM542/blob/master/Midterm%20Project/Button_Controls_LED/Button_Controls_LED.ino)



## step 2: Wire up the infrared remote with the Uno.
### After I figured out how the button and curcuit work, I replaced the physical button to IR sensor. I installed IR remote library, but I found that the library does not match the remote I have. I then used the code ([click here to see IR code](https://github.com/mengxiangjie/CIM542/blob/master/Midterm%20Project/IR_Codes/IR_Codes.ino)) to print the unique code of each button of the remote. I printed and recorded a series of the button code for later use. 



## step 3: Use the infrared remote to control LED light




[Click here to watch my Spaceship Interface Video](https://www.youtube.com/watch?v=yIs-YTIfQFg&feature=youtu.be)

[Spaceship Interface Picture](https://github.com/mengxiangjie/CIM542-1C/blob/master/Week%203/IMG_2860.JPG)


 

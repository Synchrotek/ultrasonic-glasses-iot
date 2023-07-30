<h1 align="center"><strong>Ultrasonic-glasses-iot</strong></h1>
<p><h2 align="center">In this repository The The code of the project "Ultrasonic Glasses for blind people" can be found</h2></p>

<details open> 
  <summary><h2>Components Required : </h2></summary>
    <ol>
      <li>Nodemcu(esp8266)</li>
      <li>Ultrasonic sensor</li>
      <li>Li-ion Rechargable Battery</li>
      <li>Active buzzer & Led light</li>
      <li>Switch</li>
      <li>Jumper wires</li>
    </ol>
  </table>
</details>

Software part
============
* Download & install the [ Arduino ide ](https://www.arduino.cc/en/software) to upload code to esp8266.
* Download & install the esp8266 board in the arduino ide by following [ this ](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/).
* Take the code from "ultrasonic_glass.ino" and paste it in a new sketch in the arduino ide.
* Connect the Nodemcu to your system, and in arduino ide select it's port and board (in tool option).
* Then click upload code. After the code uploaded the nodemcu will quicky start it's operation.

<br>

How to use
============
After setup go to the base directory of remove-bg.py

run that python file through terminal in that directory
```
 python remove-bg.py
```
To input a specific image file 
* open remove-bg.py in any text-editor and
* Inside "main()" method give the relative or full path of Image to "input_path" Variable 
* The Images like ( .png, .jpg. jpeg .webp etc ) are all allowed

for example : `input_path = 'Images/myCustomImage.png'`

After running the "main.py" you will get the output Image in the same directory in "output.png"

<br>
<hr>


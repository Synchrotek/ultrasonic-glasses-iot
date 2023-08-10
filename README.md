<h1 align="center"><strong>Ultrasonic-glasses-iot</strong></h1>
<p><h2 align="center">In this repository The The code & proper instruction for the project <br> "Ultrasonic Glasses for blind people" can be found</h2>
</p>
<hr>
 
Project Preview
============
* Proper preview of this project can be found :
  * [ HERE ](https://www.linkedin.com/posts/satyajit-nayak-42b8a01a1_ultrasonic-glasses-designed-for-people-activity-7090581692050026497-TZze?utm_source=share&utm_medium=member_desktop) on LinkedIn
  * And another Preview [ HERE ](https://www.linkedin.com/posts/satyajit-nayak-42b8a01a1_found-a-cool-use-of-this-ultrasonic-glasses-activity-7090589825342332928-lf6P?utm_source=share&utm_medium=member_desktop)
* <details close> 
  <summary> and Here : ( click )</summary>
  <br><img alt="Circuit Diagram" width="300" src="https://github.com/PuL5TaR/simple-web-animation-01/assets/77431114/d0ccabbe-df6a-4d9e-86a5-fbcea69f070c"/>
  </details>

<details close> 
  <summary><h2>Working : </h2></summary>
    <ol>
      <li>With this glasses on, A blind people can easily navigate his/her environment.</li>
      <li>The ultrasonic sensor in the glass measures the distance from an obstacle infront and sends it to the esp8266 microcontroller.</li>
      <li>The microcontroller then does the logic, so that if the obstacle distance from sensor is less than 35cm, Then it turn on the buzzer and led.</li>
      <li>Also if the distance gets lower then this alert signal intensifies and vice versa.</li>
    </ol>
</details>

<details open> 
  <summary><h2>Components Required : </h2></summary>
    <ol>
      <li>Nodemcu (esp8266)</li>
      <li>Ultrasonic sensor</li>
      <li>Active buzzer & Led light</li>
      <li>Switch</li>
      <li>Jumper wires</li>
      <li>Li-ion Rechargable Battery</li>
    </ol>
</details>
<br>

Hardware part
============
* After all the components are there, connect them according to the following circuit diagram : 
   <p></p><img alt="Circuit Diagram" width="600" src="https://github.com/PuL5TaR/Ascii-art-generator-py/assets/77431114/b9a8661c-bfeb-4792-a2fd-bc80d71cb221"/><br>
* Using a breadboard in connection will be helpful.
  
<br>

Software part
============
* Download & install the [ Arduino ide ](https://www.arduino.cc/en/software/) to upload code to esp8266.
* Download & install the esp8266 board in the arduino ide by following [ this ](https://randomnerdtutorials.com/how-to-install-esp8266-board-arduino-ide/).
* Take the code from "ultrasonic_glass.ino" and paste it in a new sketch in the arduino ide.
* Connect the Nodemcu to your system, and in arduino ide select it's port and board (in tool option).
* Then click upload code. After the code uploaded the nodemcu will quicky start it's operation.
  
<br>

How to use
============
After the Hardware part & Software part is complete : 

It will start it's operation.

* It can also show the measured distance from the Obstacle. To see It : 
  * After following Hardware & software part, connect the circuit again to your system.
  * In the Arduino Ide open serial monitor and choose the baud rate = 9600.

* It can be powered by the usb cable and a charger.
* But in order to power it on battery a proper power source is required.
     * In this project 2 Li-ion 18650 rechargable batteries are used.

<br>
<hr>


# Control de arduino por bluetooth
Aplicación para android  que controla los pines digitales y lee los pines analógicos de una placa arduino mediante la comunicación serial con un módulo bluetooth HC-05. Esta aplicación está hecha con appinventor y su código fuente se puede obtener desde el siguiente enlace: [Control Arduino por Bluetooth](http://ai2.appinventor.mit.edu/?galleryId=4625009293656064)

# Instalación
Descargar la apliación desde este enlace: [ArduinoBluetoothControl](https://github.com/cochayuyo/bluetoothLed/raw/master/ArduinoBluetoothControl.apk) o escaneando el siguiente código QR. Luego instalarla en el teléfono celular.
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/qr_img.png" alt="Código QR"/>
</p>

# Conexiones
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/arduino-bluetooth.png" alt="Conexiones"/>
</p>

# Instrucciones
- Subir el sketch [bluetoothLed.ino](https://github.com/cochayuyo/bluetoothLed/blob/master/bluetoothLed.ino) a la placa arduino antes de conectar el módulo bluetooth HC-05.
- Realizar las conexiones y conectar la placa arduino a una fuente de poder.
- Descargar e instalar la aplicación en el celular.
- Habilitar bluetooth y emparejar el modúlo bluetooth HC-05 con el teléfono.
- Abrir la aplicación, seleccionar en la lista desplegable el dispositivo y presionar el botoón "Conectar". En caso de producirse errores durante la conexión, reiniciar el bluetooth en el celular.
- Controlar el estado de los leds 13, 12 y 11 mediante los botones. Controlar el brillo del led 10 con el control deslizante. Observar el valor del pin analógico 0 en la etiqueta.

# Capturas de pantalla

|               |               |        |
| :-----------: |:-------------:| :-----:|
| ![Screenshot 1](https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-01.png)      | ![Screenshot 2](https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-02.png) | ![Screenshot 3](https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-03.png) |








# Control de arduino por bluetooth
Aplicación para android  que controla los pines digitales y lee los pines analógicos de una placa arduino mediante la comunicación serial con un módulo bluetooth HC-05. Esta aplicación está hecha con appinventor y se puede obtener su código fuente desde el siguiente enlace: [Control Arduino por Bluetooth](http://ai2.appinventor.mit.edu/?galleryId=4625009293656064)

# Instalación
Descargar la apliación desde este enlace: [ArduinoBluetoothControl](https://github.com/cochayuyo/bluetoothLed/raw/master/ArduinoBluetoothControl.apk) o escaneando el siguiente código QR. Luego instalarla en el teléfono celular.
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/qr_img.png" alt="Código QR"/>
</p>

# Conexiones
En la siguiente imagen se muestran las conexiones necesarias. El led rojo es opcional, ya que la placa arduino UNO tiene un led integrado conectado al pin 13.
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/arduino-bluetooth.png" alt="Conexiones"/>
</p>

# Instrucciones
- Subir el sketch [bluetoothLed.ino](https://github.com/cochayuyo/bluetoothLed/blob/master/bluetoothLed.ino) a la placa arduino antes de conectar el módulo bluetooth HC-05.
- Realizar las conexiones y conectar la placa arduino a una fuente de poder. Puede ser el mismo puerto USB usado para subir el sketch previamente.
- Descargar e instalar la aplicación en el celular.
- Habilitar bluetooth y emparejar el modúlo bluetooth HC-05 con el teléfono.
- Abrir la aplicación, seleccionar en la lista desplegable el dispositivo y presionar el botoón "Conectar". En caso de producirse errores durante la conexión, reiniciar el bluetooth en el celular.
- Controlar el estado del led 13 mediante el botón redondo central.

# Captura de pantalla
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-01.png" alt="screenshot 01"/>
</p>

# Control de arduino por bluetooth
Aplicación para android  que controla el led 13 de una placa arduino UNO conectado a un módulo bluetooth HC-05.

# Instalación
Descargar la apliación ArduinoBluetoothControl.apk desde el siguiente enlace y luego instalarla en el teléfono celular.
![Código QR](https://github.com/cochayuyo/bluetoothLed/blob/master/qr_img.png)

# Conexiones
En la siguiente imagen se muestran las conexiones necesarias. El led rojo es opcional, ya que la placa arduino UNO tiene un led integrado conectado al pin 13.
![Conexiones](https://github.com/cochayuyo/bluetoothLed/blob/master/arduino-bluetooth.png)

# Instrucciones
- Subir el sketch ![bluetoothLed.ino](https://github.com/cochayuyo/bluetoothLed/blob/master/bluetoothLed.ino) a la placa arduino antes de conectar el módulo bluetooth HC-05.
- Realizar las conexiones y conectar la placa arduino a una fuente de poder. Puede ser el mismo puerto USB usado para subir el sketh previamente.
- Instalar la aplicación en el celular.
- Emparejar el modúlo bluetooth HC-05 con el teléfono.
- Abrir la aplicación y presionar el botoón "Conectar". De la lista de dispositivos bluetooth vinculados al teléfono, seleccionar el módulo bluetooth conectado a la placa arduino.
- Presionar el botón redondo que representa al led 13 en la aplicación y obervar lo que sucede.

# Control de arduino por bluetooth
Aplicación para android  que controla los pines digitales y lee los pines analógicos de una placa arduino mediante la comunicación serial con un módulo bluetooth HC-05. Esta aplicación está hecha con appinventor y su código fuente se puede obtener desde el siguiente enlace: [Control Arduino por Bluetooth](http://ai2.appinventor.mit.edu/?galleryId=4625009293656064)

# Instalación
Descargar la apliación desde este enlace: [ArduinoBluetoothControl](https://github.com/cochayuyo/bluetoothLed/raw/master/ArduinoBluetoothControl.apk) o escaneando el siguiente código QR. Luego instalarla en el teléfono celular.
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/qr_img.png" alt="Código QR"/>
</p>

# Conexiones
<p align="center">
  <img src="https://github.com/cochayuyo/bluetoothLed/blob/master/conexiones.png" alt="Conexiones" width="75%" height="75%" />
</p>

# Instrucciones
- Subir el sketch [bluetoothLed.ino](https://github.com/cochayuyo/bluetoothLed/blob/master/bluetoothLed.ino) a la placa arduino antes de conectar el módulo bluetooth HC-05.
- Realizar las conexiones y conectar la placa arduino a una fuente de poder.
- Descargar e instalar la aplicación en el celular.
- Habilitar bluetooth y emparejar el modúlo bluetooth HC-05 con el teléfono.
- Abrir la aplicación, seleccionar en la lista desplegable el dispositivo y presionar el botoón "Conectar". En caso de producirse errores durante la conexión, reiniciar el bluetooth en el celular.
- Controlar el estado de los leds 13, 12 y 11 mediante los botones. Controlar el brillo del led 10 con el control deslizante. Observar el valor del pin analógico 0 en la etiqueta.

# Capturas de pantalla
<p align="center">
<table style="width:100%">
  <tr>
    <th><img src="https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-01.png" alt="Screenshot 1"/></th>
    <th><img src="https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-02.png" alt="Screenshot 2"/></th> 
    <th><img src="https://github.com/cochayuyo/bluetoothLed/blob/master/screenshots/screenshot-03.png" alt="Screenshot 3"/></th>
  </tr>
</table>
</p>

# Protocolo de conexión
El protocolo de conexión consta de una petición hecha por la aplicación y su respectiva respuesta producida por arduino. La petición consta invariablemente de 3 bytes organizados de la siguiente manera:
  - Byte 1: acción a realizar. Puede ser una acción de lectura o escritura sobre cualquier pin de arduino.
  - Byte 2: pin sobre el cual realizar la acción.
  - Byte 3: valor necesario para realizar la acción. Las acciones de lectura no ocupan este bit, pero igualmente debe ser enviado.

Las peticiones de escritura no generan mensajes de respuesta. Por otro lado, las acciones de lectura provocan respuestas de 1 byte cuando la lectura es de un pin digital y de 4 bytes cuando es un pin analógico.

<p align="center">
<table style="width:100%">
  
  <tr>
    <th>Petición</th>
    <th>Acción</th>
    <th>Respuesta</th> 
  </tr>
  
  <tr>
    <td><table>
          <tr>
            <th>Byte1</th>
            <th>Byte2</th>
            <th>Byte3</th>
          </tr>
          <tr>
            <td>65</td>
            <td>2 a 13</td>
            <td>0</td>
          </tr>
        </table>
    </td>
    <td>digitalRead(pin)</td>
    <td>1 byte: 0 ó 1</td> 
  </tr>
  
  <tr>
    <td><table>
          <tr>
            <th>Byte1</th>
            <th>Byte2</th>
            <th>Byte3</th>
          </tr>
          <tr>
            <td>66</td>
            <td>2 a 13</td>
            <td>0 ó 1</td>
          </tr>
        </table>
    </td>
    <td>digitalWrite(pin, valor)</td>
    <td>Sin respuesta</td> 
  </tr>
  
  <tr>
    <td><table>
          <tr>
            <th>Byte1</th>
            <th>Byte2</th>
            <th>Byte3</th>
          </tr>
          <tr>
            <td>67</td>
            <td>14 a 18</td>
            <td>0</td>
          </tr>
        </table>
    </td>
    <td>analogRead(pin)</td>
    <td>4 bytes: 0 a 1023</td> 
  </tr>
  
  <tr>
    <td><table>
          <tr>
            <th>Byte1</th>
            <th>Byte2</th>
            <th>Byte3</th>
          </tr>
          <tr>
            <td>68</td>
            <td>3,5,6,9,10,11</td>
            <td>0 a 255</td>
          </tr>
        </table>
    </td>
    <td>analogWrite(pin, valor)</td>
    <td>Sin respuesta</td> 
  </tr>
  
  <tr>
    <td><table>
          <tr>
            <th>Byte1</th>
            <th>Byte2</th>
            <th>Byte3</th>
          </tr>
          <tr>
            <td>69</td>
            <td>0</td>
            <td>0</td>
          </tr>
        </table>
    </td>
    <td>Obtiene el valor de PWM</td>
    <td>1 bytes: 0 a 255</td> 
  </tr>
  
</table>
</p>







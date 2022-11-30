# Arduino Serial ile Led Kontrolü
Arduino Kartı üzerinde Serial arayüzü ile led kontrolü sağlar. <br/>
echo modu, led Açık/Kapalı süreleri ayarlanabilir. <br/>
Serial Monitörüzerinden kullanabileceğiniz bazı komutlar;<br/>
echo modunu aktif hale getir:<br>
```
start
```
echo modunu pasif hale getir: <br/>
```
stop
```
Led Açık kalma süresini set etmek için:<br/>
```
ledon=time_ms
```
Led Kapalı kalma süresini set etmek için:<br/>
```
ledoff=time_ms
```
<h3>Arduino Kartında Test Etmek</h3> <br/>
``
Arduino IDE kullanarak Arduino Kartlarında herhangi biri ile Serial Monitör kullanarak Test Edebilirsiniz.
``

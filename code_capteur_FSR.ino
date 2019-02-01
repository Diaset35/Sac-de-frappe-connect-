int fsrPin = 0; // le FSR et le pulldown 10K sont connectés à a0
int fsrReading; // la lecture analogique du diviseur de résistance FSR
void setup() {
  // put your setup code here, to run once:{
   Serial.begin (9600);

}

void loop() {
  
  fsrReading = analogRead (fsrPin);  
 
  //Serial.println ("Lecture analogique = ");
  //Serial.print (fsrReading); // la lecture analogique brute
 
 
//  if (fsrReading == 0) {
//    Serial.println ("- Pas de pression");
//  } 
//  else if (fsrReading <10) {
//    Serial.println ("- Toucher léger");
//  } 
//  else if (fsrReading <50) {
//    Serial.println ("- Compression légère");
//  } 
//  else if (fsrReading <150) {
//    Serial.println ("- Compression moyenne");
//  } 
//  else if (fsrReading > 500){
//    Serial.println ("- Big squeeze");
//    Serial.println ("  ");
//  }

  if (fsrReading > 200){
    Serial.print ("Big squeeze ! : ");
    Serial.print (fsrReading);
    Serial.println (" !!! ");
    }
  delay (100);
}


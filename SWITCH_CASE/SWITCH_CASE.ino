String ata = "ATA IS DUM";
String enis = "ENIS IS DUM";
String ozalp = "OZALP IS DUM";
String ahmet  = "AHMET IS DUM";


int num;

 void setup(){
  Serial.begin(9600);
  
 }

void loop(){
  num = random(int(4));

  switch(num){
    case 0:
     Serial.println(ata);
     break;
    case 1:
     Serial.println(enis);
     break;
    case 2:
     Serial.println(ozalp);
     break;
    case 3:
     Serial.println(ahmet);
     break;
    default:
     Serial.println("none");
   
    
  }
  delay(2000);
}

#define PLUS 11
#define MINUS 12

int digit = 0;
  
byte digits[10][7]=
{ 
  {1,1,1,1,1,1,0}, //0
  {0,1,1,0,0,0,0}, //1
  {1,1,0,1,1,0,1}, //2
  {1,1,1,1,0,0,1}, //3
  {0,1,1,0,0,1,1}, //4
  {1,0,1,1,0,1,1}, //5
  {1,0,1,1,1,1,1}, //6
  {1,1,1,0,0,0,0}, //7
  {1,1,1,1,1,1,1}, //8
  {1,1,1,1,0,1,1}  //9
};


void setup () {
  for(int i =2; i<10; i++){
    pinMode(i,OUTPUT);
  }
  digitalWrite(9,HIGH);
}

void loop(){
  for(int i=0; i<10; i++){
    delay(1000);
    displayDigit(i);
  }
}

void displayDigit(int num){
  int pin = 2;
  for(int i=0; i<7;i++){
    digitalWrite(pin+i, digits[num][i]);
  }
}

//INCLUDES


/*---Pin Definitions---*/

//MOTORS






//SERVO



short unsigned int control;
bool ispick = true;

const char* ssid = "";  //Your Wifi name
const char* password = "";  //Wifi password

//OBJECT



//function declarations
void forward();
void backward();
void left();
void right();
void stopBot();
void pick();
void keep();


void setup() {
  // put your setup code here, to run once:





  /*Code to establish connection to wifi*/
  
  

  // WIFI CONNECTION ATTEMPTS





  //Code after wifi is connected 
  if(WiFi.status() == WL_CONNECTED)
  {
    Serial.println("\nConnected to WiFi");
    Serial.print("IP Address: ");
    Serial.println(WiFi.localIP());

    //here we are defining the requests that make changes to control variable
    server.on("/forward", HTTP_GET, [](AsyncWebServerRequest *request){



    });
    server.on("/left", HTTP_GET, [](AsyncWebServerRequest *request){



    });
    server.on("/right", HTTP_GET, [](AsyncWebServerRequest *request){



    });
    server.on("/back", HTTP_GET, [](AsyncWebServerRequest *request){



    });
    server.on("/stop", HTTP_GET, [](AsyncWebServerRequest *request){



    });
    server.on("/pinch", HTTP_GET, [](AsyncWebServerRequest *request){






    });

    //SERVER BEGIN


  }
  else
  {
    Serial.println("\nFailed to connect to WiFi");
  }
}

void loop() {
  // put your main code here, to run repeatedly:
 
  switch (control) {
    case 1: 
    case 2: 
    case 3: 
    case 4: 
    case 5: 
    case 6: 
    case 7: 

    case 0://idle case 
    default: break;
  }
delay(10);
}


void forward() {




}

void backward() {




}

void right() {




}

void left() {




}

void stopBot() {




}

void pick(){



}

void keep(){



}
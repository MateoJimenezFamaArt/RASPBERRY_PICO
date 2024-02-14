void task1(){
        enum class Task1State{
                INIT,
                WAIT_FOR_TIMEOUT
        };

        static Task1State t1s = Task1State::INIT;
        static uint32_t lastTime;
        static constexpr uint32_t INTERVAL = 1000;

        switch(t1s){
                case Task1State::INIT:{
                        Serial.begin(115200);
                        lastTime = millis();
                        t1s = Task1State::WAIT_FOR_TIMEOUT;
                        break;
                }
                case Task1State::WAIT_FOR_TIMEOUT:{
                        uint32_t currentTime = millis();
                        if ((currentTime - lastTime) >= INTERVAL){
                                lastTime = currentTime;
                                Serial.print("1");
                        }
                        break;
                        }
                default:{
                        break;
                        }
                }
}

void task2(){
        enum class Task2State{
                INIT,
                WAIT_FOR_TIMEOUT
        };

        static Task2State t2s = Task2State::INIT;
        static uint32_t lastTime;
        static constexpr uint32_t INTERVAL = 2000;

        switch(t2s){
                case Task2State::INIT:{
                        Serial.begin(115200);
                        lastTime = millis();
                        t2s = Task2State::WAIT_FOR_TIMEOUT;
                        break;
                }
                case Task2State::WAIT_FOR_TIMEOUT:{
                        uint32_t currentTime = millis();
                        if ((currentTime - lastTime) >= INTERVAL){
                                lastTime = currentTime;
                                Serial.print("2");
                                Serial.print("\n");
                        }
                        break;
                        }
                default:{
                        break;
                        }
                }
}

void task3(){
        enum class Task3State{
                INIT,
                WAIT_FOR_TIMEOUT
        };

        static Task3State t3s = Task3State::INIT;
        static uint32_t lastTime;
        static constexpr uint32_t INTERVAL = 3000;

        switch(t3s){
                case Task3State::INIT:{
                        Serial.begin(115200);
                        lastTime = millis();
                        t3s = Task3State::WAIT_FOR_TIMEOUT;
                        break;
                }
                case Task3State::WAIT_FOR_TIMEOUT:{
                        uint32_t currentTime = millis();
                        if ((currentTime - lastTime) >= INTERVAL){
                                lastTime = currentTime;
                                Serial.print("2 + 1");
                                Serial.print("\n");
                        }
                        break;
                        }
                default:{
                        break;
                        }
                }
}

void setup(){
  task1();
  task2();
  task3();
}

void loop(){
  task1();
  task2();
  task3();
}

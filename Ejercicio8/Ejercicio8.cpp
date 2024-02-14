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
			if( (currentTime - lastTime) >= INTERVAL){
				lastTime = currentTime;
				Serial.print("Mensaje A -> Paso 1 Segundo");
			}
			break;
						  }
		default:{
			break;
			}
		}
}

void task2(){

}

void task3(){

}

void setup()
{
    task1();
    task2();
    task3();
}

void loop()
{
    task1();
    task2();
    task3();
}

#pragma config(Sensor, S1,     ButtonLeft,     sensorEV3_Touch)
#pragma config(Sensor, S4,     ButtonRight,    sensorEV3_Touch)

task main()
{
	int speedleft = 0;
	int speedright = 20;
	int time = 1000;

	while(true)
	{
		while((SensorValue(ButtonLeft) == 0 && speedleft <= 100)
			{
				motor(motorB) = speedleft + 40;
				motor(motorC) = speedright + 50;
				wait1Msec(time);

				speedleft = speedleft + 3;
				speedright = speedright + 2;
				time = time + 500
			}

		while(SensorValue(ButtonLeft) == 1 || SensorValue(ButtonRight)== 1)
		{
			motor(motorB) = -40;
			motor(motorC) = -70;
			wait1Msec(1000);

			motor(motorB) = 60;
			motor(motorC) = 70;
			wait1Msec(1900);
			resetMotorEncoder(MotorB);
			resetMotorEncoder(MotorC);

			//this is successful!

		}

		speedleft = 0;
		speedright = 20;
		time = 1000;


		while((getMotorEncoder(motorB) > 5000 && SensorValue(ButtonLeft) == 0 && speedleft <= 80)
		{
			//(spiraling)
			motor(motorB) = speedleft + 40;
			motor(motorC) = speedright + 50;
			wait1Msec(time);

			speedleft = speedleft + 3;
			speedright = speedright + 2;
			time = time + 500

		}




	}


}

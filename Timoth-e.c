
task main()
{
	while( true )
	{
		motor(motorB)= 50;
		motor(motorC)= 50;
		wait1Msec(1000);
			while(SensorValue(buttonAny)== 1)
			{
				motor(motorB)= -50;
				motor(motorC) = -50;
				wait1Msec(1000);
			}
		motor(motorB)= 50;
		motor(motorC) = 50;


	}



}

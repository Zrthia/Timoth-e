
task main()
{
	motor(motorB)= 50;
	motor(motorC)=50;
	wait1Msec(2000)

	// this is not a dog;
	while(SensorValue(buttonAny) == 1)
	{
		motor(motorB)= -50;
		motor(motorC)= -50;
		motor(motorB)= 50;
		wait1Msec(2000);
		motor(motorB)= -50;
		motor(motorC)= -50;

	}
}

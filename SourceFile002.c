
task main()
{
<<<<<<< HEAD

=======
	// this is a dog;
	// you are pigeon;
	while(SensorValue(buttonAny) == 0)
		{
			motor[motorB] = 40;
			motor[motorC] = 40;
		}
	if(SensorValue(buttonAny) == 1)
	{
		motor[motorB] = -100;
		motor[motorC] = -100;
		wait1Msec(2523);
	}
>>>>>>> 4a19c2fafdb3fee65e36e9cadcff891c105e3140
}

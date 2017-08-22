string CalculationDate(long long second)
{
	int year = 1970, month = 1, day = 1;
	int hours = 0, minute = 0;
	while (second > 60)
	{
		second -= 60;
		minute += 1;
		if (minute == 60)
		{
			minute = 0;
			hours += 1;
			if (hours == 24)
			{
				hours = 0;
				day += 1;
				if (day == 30)
				{
					day = 1;
					month += 1;
					if (month == 12)
					{
						month = 1;
						year += 1;
					}
				}
			}
		}
	}
	char buff[] = "1970/01/01 00:00:10";
	sprintf(buff,"%d/%02d/%02d %02d:%02d:%02d", year, month, day, hours, minute, second);

	return buff;
}
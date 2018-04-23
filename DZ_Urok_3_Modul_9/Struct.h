struct Name
{
	char fam[20];
	char im;
	char ot;
};

struct DATE
{
	int god;
	int mes;
	int chis;
};

struct note1 
{
	Name *name;
	int tele;
	DATE *dr;
};

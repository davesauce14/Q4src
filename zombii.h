#ifndef __ZOMBII_H__
#define	__ZOMBII_H__


class zombii
{
public:
	zombii(void);
	~zombii(void);



	static int zombieCount;
	static int numberOfWaves;			  //the number of waves
	//int zombiesPerWave = numberOfZombies/ numberOfWaves;
	static int numberOfBosses;
	   //if boss killed current level changes

	static bool zombiesKilled;
	static bool bossKilled;



	static void setZombieCount(int i);
	static int getZombieCount();
	static void setLevel(int lvl);
	static int getLevel();
	static bool loadNextLevel();
	static void waveSpawn(int spawnCount);
	static void zombieSpawn();
};

#endif	/* !__ZOMBII_H__*/


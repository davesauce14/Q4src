#include "zombii.h"
#include <iostream>
#include <windows.h>

	//static *char zombieType;
	//static *char bossType;

	int numberOfZombies = 6;		//the number of total zombies
	int numberOfWaves;			//the number of waves	 	//int zombiesPerWave = numberOfZombies/ numberOfWaves;
	int numberOfBosses;
	int zombiesSpawned;			//number is incremented every time a zombie spawnes.

	static int currentLevel;	   //if boss killed current level changes

	bool zombiesKilled;
	static bool bossKilled;


zombii::zombii(void)
{
}


zombii::~zombii(void)
{
}
/////////////////////////////////////////

void zombii::waveSpawn(int spawnCount){
	for(int i = 0; i<=spawnCount; i++){
	   zombieSpawn();
	   Sleep(10000);
	}
}

void zombii::zombieSpawn(){
	numberOfZombies++;
}




/////////////////////////////////////////

void zombii::setZombieCount(int i){
	numberOfZombies = i;
}

int zombii::getZombieCount(){
	return numberOfZombies;
}

/////////////////////////////////////////

int zombii::getLevel(){
	return currentLevel;
}

void zombii::setLevel(int lvl){
	currentLevel = lvl;
}

/*
bool zombii::loadNextLevel(){
	 return bossKilled;
}		*/


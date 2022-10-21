#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>



//Structs to hold info

struct person
{
  int health;
  char name[20];
  int attack;
  char description[100];
  char type[20];
};

struct person player;

char lore[68][900] = {


  "You find a book and read it. It is tattered but you can make out that it is of ancient battles and kings. The one story that survives is of a king who used to live in this general area and once pretended to sleep through a battle to avoid having to manage troops. It was a very popular story or rumour depending on who you asked \n",
  "You find a magic ring. It's from a time long before when such rings were common. Supposedly such a ring could offer powers like invisibility, increased charisma and the ability to avoid minor pain. Sadly the magic is all drained from this so it is worthless aside from its sentimental value.\n",
  "You find a Sword of Warfarning. This sword glows red when the user will suffer misfortune. Unfortunatly the sword is very lenient with what it counts as misfortune as its known to glow red to warn the wielder they have a crumb stuck on their teeth or spilled a drop of water on their shirts \n ",
  "You find a Magical SwordProof Armour. This rare armour is completely impossible to damage with a sword. Any sword swung at the armour will pass through, doing absolutely no damage to the armour. You decide not to wear it as it is unfasionable\n",
  "You find a Club of Healing. Whenever the club does damage, the attack target heals by the amount of damage dealt. You decide to keep it if you ever need to interrogate anyone \n",
  "You find a ring of Time Reversal.  When put on, the ring undoes your last action - which was putting on the ring.\n",
  "You learn the time. It says it is currently noon \n",
  "You find a Fair deck of cards: A deck of cards that, when used to play blackjack, will always result in every player getting 19 with three cards. You are adverse to gambling though\n",
  "You find a Reverse bag of holding: A massive sack that has only enough capacity to hold an acorn. You think of the sick vines you can make this\n",
  "You find a Reveler's mug: A mug that cannot be turned upside down. If one attempts to do so, the mug changes shape in their hands so that it does not spill. You think of that one time you spilled your soup watching Cars Movies\n",
  "You find a Ring of the Boneless - The wearer's bones disappear, causing them to turn into a puddle of flesh. The wearer retains their basic shape and does not suffer any long-term or short-term injury as a result of the ring. Could be useful, if the ring doesn't just slip off immediately.\n",
  "You find a Out of Order Sign - A sign on a string. If placed on an object, the object appears to be broken beyond repair. Everyone absolutely believes the item is broken, including the person who put it there.\n",
  "You find a Tuning Spoon - Makes a clink sound when tapped against anything. Even in a vacuum.\n",
  "You find a Bracelet of Feline Good - Wearer always feels optimistic and cheerful. However, now speaks in Cat-Related puns. You decide to put it away as you feel purrfect already\n",
  "You find a Flask of Frustration - A container which makes you more thirsty after drinking from it. You're already frustrated about having to play this poor excuse of a project so you move on.\n",
  "You find a Ring of Forgotten Knowledge Whenever someone asks you a question you know the answer, you just can't think of it. You decide to put it away since it reminds you of High School\n",
  "You find an Orc Lovers Headband The wearer of this headband is obsessed with the idea of mating with an Orc. You decide to put it away because it doesn't fit\n",
  "You find a Shortsighted Lantern. While lit, whoever is holding it can only see what is within the lantern's glow\n",
  "You find a Ring of Encouragement while worn, occasionally whispers encouraging words that only the wearer can hear. It tells you to take the ring off as you're perfect the way you already are\n",
  "You find a Cloak of Deceptive Hue: no one can quite agree if this is dark purple or dark blue. You think it's more of a black\n",
  "You find Torches that only stay lit underwater. You can't find a deep pond though\n",
  "You find a  bowl and spoon that makes everything eaten with them taste like bananas.\n",
  "You find a pair of Shy panties: Undergarments that disappear when seen\n",
  "You find a really small violen. You wish you had claws to play it with\n",
  "You find a Strider's bedstead: Boots that make you dream vividly of sleepwalking. You prefer to dream of flying them\n",
  "You find a Wand of Sneezing. You can point at someone and they sneeze. Seems too powerful for mortal hands so you put it away\n",
  "You find a Diadem of Upward Inflection. The wearer will always sounds like they're asking a question? You sound puzzled\n",
  "You find a Breeches of Trust. It is said that once per day, the wearer makes very uncomfortable advances on a random party member. However, you do not have any party members\n",
  "You find a Quill of Rage. This is an ordinary quill that will only write when you scribble in the corner to make sure it is working. Sadly, you do not have paper\n",
  "You find a Cursed Belt of many pouches. It is said this can hold any item but you may not remember which pouch the item is in. You put it an a pouch\n",
  "You find a Cursed Maternal Exploits Journal: It is said to be a cursed item that tells you all of the naughty dreams your mother ever had... In graphic detail and with pictures. You cannot put it down until you read the last page, and every page before it. However, you cannot read the language when you try resulting in a wasted day\n",
  "You find a Yo-yo of slightly improved coolness: It causes you to gain the respect of rootless '90s teenagers.\n",
  "You find a pair of Golf Socks. They have 18 holes\n",
  "You find a Broach of Color Changing - A cheap trinket sold for the novelty of a broach that changes color based on your emotional state, allowing for analysis therein. It actually changes color based on ambient temperature.\n",
  "You find a Wand of Turning Undead. It Spins the undead 180 degrees around. You consider trying it on yourself\n",
  "You find a Wand of wand recursion. It Creates a wand. The wand turns to dust upon use. The created wand can only be used to create a wand, and turns to dust upon use. The wand createed by the created wand... \n",
  "You find a Blade of Death: Anytime this mystical sword is drawn, it immediately kills the wielder and re-sheathes itself. You can't figure out how to unsheate it\n",
  "You find a Wand of Bark. When used the wand summons a small pile of tree bark.\n",
  "You find a Wand of Bark When used the wand makes an audible noise that sounds like the bark of a dog. \n",
  "You find a Potion of Decaffeinated Coffee: It tastes exactly like a potion of caffeinated coffee, but with none of the benefits. \n",
  "You find a Brick of throwing: This brick, made for Building, may be thrown.\n",
  "You find a Amulet of Demon-Summoning: According to the inscription, the user may summon the most powerful demon in the universe named Qztxychtwdgb'xxiygh'fljjk'zmvpcdr'kkftpsl to their service if they can correctly pronounce his name. \n",
  "You find a Tooth of the Fairy. This magic tooth is placed in the mouth after the fresh removal of a natural tooth. It then seals itself in place of the old tooth \n",
  "You find a Coin of Indecision: A gold coin with the word " "YES"
    " on one side and the word " "NO"
    " on the other. If it is flipped while asking a question, the coin always lands on edge.\n",
  "You find a Ring of Invisibility: When worn, this ring becomes invisible. You put it on immediately\n",
  "You find a Solar Powered Lamp- This magical lamp functions perfectly when in sunlight. When in dim/dark areas, the light ceases to function. \n",
  "You find a pair of Glow in the Dark Sunglasses. You wear them immediately\n",
  "You find a Time Walkers - boots that let you travel through time, but only going forward at regular speed. You eagerly put them on\n",
  "You find a Boundless bottle - a bottle that is always filled with a liquid, but only when it is submerged in that liquid\n",
  "You find a Key of mimicry - this key can become any key in the world, however, you have no way of telling what key it is at any given moment\n",
  "You find a Magic mirror - You always appear beautiful when looking into this mirror, but only if you look at in in complete darkness\n",
  "You find an Axe of Big Numbers - This axe shouts Big numbers baby, come on! whenever it is swung, but always deals 1 damage or less. \n",
  "You find a Ball of Eyes - A snow-globe filled with miniature eyeballs. When shaken, it grants the user a blurry, jittery vision of some future event.You shake it and see a blurry vision of what appears to be a volcano\n",
  "You find a pair of Boots of Levitation - These boots levitate a few inches off the ground when not worn. You wear them immediately\n"
};

//Function Set up Start
int roll_die ();

int roll_die_5 ();

int roll_die_manual (int num_of_sides);

int board ();

struct person create_enemy ();

struct person create_enemy_manually (char *name, int health, int attack);

struct person create_enemy_manually_fully (char *name, int health, int attack,
					   char *description, char *type);

int battle (struct person enemy);

int battle_no_magic (struct person enemy);


int battle_result_func (struct person enemy);

void delay (int number_of_seconds);

struct person return_random_enemy ();

//End of Function Set up



int
main (void)
{
  srand (time (NULL));
  char name_confirm[5];

  puts
    ("Welcome to the Unnamed Board Game RPG. You will enter a new world. \n");

  do
    {

      puts ("Enter Your Name to Begin \n");
      scanf ("%s", player.name);

      printf ("You entered: %s. \n Are you happy with your choice? Press " "y"
	      " to continue. Press anything else to re-enter your name\n",
	      player.name);

      scanf ("%s", name_confirm);

    }
  while (strcmp (name_confirm, "y"));



/*

  struct person enemyOne = create_enemy ();

  enemyOne.health = 10;
  enemyOne.attack = 1;
  printf ("%d\n", enemyOne.health);
  printf ("%d\n", enemyOne.attack); */
  player.health = 10;
  player.attack = 3;

  strcpy (player.description, "This is the player character");
  strcpy (player.type, "normal");
  /*
     printf ("%s\n", player.description);
   */

  //  enemyOne.health = 0;
  // printf("%d\n", enemyOne.health);

  //int result = battle (enemyOne);
  // struct person enemyTwo = create_enemy_manually ("troll", 5, 5);
/*
  printf ("%d\n", enemyTwo.health);
  printf ("%d\n", enemyOne.attack);
  printf ("%s\n", enemyOne.name);

  struct person enemies[2] = {
    {3, "monster 1", 2, "First Array Struct mon"},
    {2, "monster 2", 1, "Second Array Struct mon"}
  };
*/

/*
int result = battle (enemyTwo);

  if (result == 1)
    {
      printf (" Game Over\n");
    }
  if (result == 2)
    {
      printf ("You Win");
    }
    
    */

  puts ("You begin your adventure \n");
  for (int i = 1; i < 10; ++i)
    {

      printf ("Roll Number %d\n \n", i);
      int outcome = board ();

      if (outcome == 2)

	{
	  int battle_outcome = battle (return_random_enemy ());

	  if (battle_outcome == 1)
	    {
	      return 1;
	    }
	}

      if (outcome == 4)
	{
	  player.attack = player.attack + 1;
	  player.health = player.health + 1;

	  printf ("Your health and attack has increased by 1\n");
	}

      if (outcome == 5)
	{

	  player.health = player.health - 1;

	  printf ("Your health has decreased by 1\n");
	}


    }


}

//Function Definitions

int
roll_die ()			//Rolls a 6 sided die
{


  return rand () % 6 + 1;
}

int
roll_die_5 ()			//Rolls a 5 Sided Die
{


  return rand () % 5 + 1;
}

int
roll_die_manual (int num_of_sides)	//Rolls any Sided Die
{


  return rand () % num_of_sides + 1;
}

int
board ()			// Uses Roll Die to create a tile
{
  int board_input = roll_die ();

  if (board_input == 1)
    {
      printf ("Nothing Happens\n");
      return 1;
    }

  else if (board_input == 2)
    {
      printf ("Battle Time\n");
      return 2;
    }

  else if (board_input == 3)
    {
      printf ("You found lore\n");
      printf ("%s", lore[roll_die_manual (68)]);
      return 3;
    }

  else if (board_input == 4)
    {
      printf ("You found an item\n");
      return 4;
    }

  else if (board_input == 5)
    {
      printf ("Debuff\n");
      return 5;
    }


  else if (board_input == 6)
    {
      printf ("ReRoll\n ");


      return roll_die_5 ();
    }

  return 1;
}

 //Used for testing - Creates a goblin enemy
struct person
create_enemy ()
{
  struct person enemyOne;
  strcpy (enemyOne.name, "goblin");
  enemyOne.health = 2;
  enemyOne.attack = 2;

  return enemyOne;
}

//Allows me to manually and quickly create an enemy
struct person
create_enemy_manually (char *name, int health, int attack)
{
  struct person enemy_manual;
  strcpy (enemy_manual.name, name);
  enemy_manual.health = health;
  enemy_manual.attack = attack;

  return enemy_manual;
}

//Allows me to manually and fully create an enemy
struct person
create_enemy_manually_fully (char *name, int health, int attack,
			     char *description, char *type)
{
  struct person enemy_manual_ful;
  strcpy (enemy_manual_ful.name, name);
  enemy_manual_ful.health = health;
  enemy_manual_ful.attack = attack;
  strcpy (enemy_manual_ful.description, description);
  strcpy (enemy_manual_ful.type, type);

  return enemy_manual_ful;
}

//Has the player fight an enemy
int
battle (struct person enemy)
{
  printf (" The Battle Begins! \n");

  printf (" Type " "battle" " or " "b" " to fight directly. " "m" " or "
	  "magic" " to use magic. " "run" " or " "r" " to try to run. Press "
	  "i" " or " "inspect" " to inspect the opponant  \n");

  printf (" You currently have %d Health and %d Attack  \n", player.health,
	  player.attack);



  char battle_optionp[12];

  scanf ("%s", battle_optionp);


  if (!strcmp (battle_optionp, "battle") || !strcmp (battle_optionp, "b"))
    {

      while (player.health >= 0 || enemy.health >= 0)
	{
	  printf ("%s Attacks %s \n", enemy.name, player.name);
	  player.health = player.health - enemy.attack;

	  printf ("%s Does %d Damage \n. %s has %i health left\n", enemy.name,
		  enemy.attack, player.name, player.health);



	  if (player.health <= 0)
	    {
	      printf ("%s Has been defeated \n", player.name);
	      return 1;
	    }

	  printf ("%s Attacks %s \n", player.name, enemy.name);

	  enemy.health = enemy.health - player.attack;

	  printf ("%s Does %d Damage\n. %s has %i health left\n", player.name,
		  player.attack - enemy.health, enemy.name, enemy.health);


	  if (enemy.health <= 0)
	    {
	      printf ("%s Has been defeated \n", enemy.name);
	      return 2;
	    }
	}
    }

  else if (!strcmp (battle_optionp, "run") || !strcmp (battle_optionp, "r"))

    {
      int roll_flee_result = roll_die ();

      if (roll_flee_result >= 3)
	{

	  printf ("you have successfully fled \n");
	  return 3;
	}


      else
	{

	  printf ("you have failled to flee. You take 1 damage \n");
	  player.health = player.health - 1;
	  return battle (enemy);
	}
    }

  else if (!strcmp (battle_optionp, "m") || !strcmp (battle_optionp, "magic"))

    {
      char magic[12];

      printf ("Type the letter of which magic attack you want to do, " "e"
	      " for electric, " "w" " for water, " "f" " for fire or " "n"
	      " for normal\n \n");

      scanf ("%s", magic);

      printf ("%s", magic);

      if (!strcmp (magic, "e") || !strcmp (magic, "w")
	  || !strcmp (magic, "n") || !strcmp (magic, "f"))

	{
	  if (!strcmp (magic, "e") && !strcmp (enemy.type, "water"))
	    {
	      printf
		("%s has taken bonus Electric damage before starting the fight. You cannot use magic anymore for this fight\n\n",
		 enemy.name);
	      enemy.health = enemy.health = enemy.health - 1;
	     return battle_no_magic (enemy);
	    }
	}

      if (!strcmp (magic, "w") && !strcmp (enemy.type, "fire"))
	{
	  printf
	    ("%s has taken bonus water damage before starting the fight. You cannot use magic anymore for this fight\n\n",
	     enemy.name);
	  enemy.health = enemy.health = enemy.health - 1;
	 return battle_no_magic (enemy);
	}

      if (!strcmp (magic, "n") && !strcmp (enemy.type, "normal"))
	{
	  printf
	    ("%s has taken bonus normal damage before starting the fight. You cannot use magic anymore for this fight\n\n",
	     enemy.name);
	  enemy.health = enemy.health - 1;
	 return battle_no_magic (enemy);
	}

      if (!strcmp (magic, "f") && !strcmp (enemy.type, "electric"))
	{
	  printf
	    ("%s has taken bonus Fire damage before starting the fight. You cannot use magic anymore for this fight\n\n",
	     enemy.name);
	  enemy.health = enemy.health - 1;
	 return battle_no_magic (enemy);
	}

      if (!strcmp (magic, "e") && !strcmp (enemy.type, "fire"))
	{
	  printf
	    ("%s has healed before starting the fight due to your electric Attack. You cannot use magic anymore for this fight\n\n",
	     enemy.name);

	  enemy.health = enemy.health + 1;
	 return battle_no_magic (enemy);
	}

      if (!strcmp (magic, "f") && !strcmp (enemy.type, "water"))
	{
	  printf
	    ("%s has healed before starting the fight due to your fire Attack. You cannot use magic anymore for this fight\n\n",
	     enemy.name);

	  enemy.health = enemy.health + 1;
	 return battle_no_magic (enemy);
	}

      if (!strcmp (magic, "w") && !strcmp (enemy.type, "electric"))
	{
	  printf
	    ("%s has healed before starting the fight due to your water Attack. You cannot use magic anymore for this fight\n\n",
	     enemy.name);

	  enemy.health = enemy.health + 1;
	return battle_no_magic (enemy);
	}


    else 
    {
        printf("Magic didn't do anything\n");
    }

      return battle (enemy);
    }


  else
    if (!strcmp (battle_optionp, "i") || !strcmp (battle_optionp, "inspect"))
    {
      printf ("%s \n", enemy.description);
      return battle (enemy);
    }
  else
    {
      return battle (enemy);
    }
}


//Battle Without magic

//Has the player fight an enemy
int
battle_no_magic (struct person enemy)
{
  printf (" The Battle Begins! \n");

  printf (" Type " "battle" " or " "b" " to fight directly. " "run" " or " "r" " to try to run. Press "
	  "i" " or " "inspect" " to inspect the opponant. Magic is no longer available  \n");

  printf (" You currently have %d Health and %d Attack  \n", player.health,
	  player.attack);



  char battle_optionp[12];

  scanf ("%s", battle_optionp);


  if (!strcmp (battle_optionp, "battle") || !strcmp (battle_optionp, "b"))
    {

      while (player.health >= 0 || enemy.health >= 0)
	{
	  printf ("%s Attacks %s \n", enemy.name, player.name);
	  player.health = player.health - enemy.attack;

	  printf ("%s Does %d Damage \n. %s has %i health left\n", enemy.name,
		  enemy.attack, player.name, player.health);



	  if (player.health <= 0)
	    {
	      printf ("%s Has been defeated \n", player.name);
	      return 1;
	    }

	  printf ("%s Attacks %s \n", player.name, enemy.name);

	  enemy.health = enemy.health - player.attack;

	  printf ("%s Does %d Damage\n. %s has %i health left\n", player.name,
		  player.attack - enemy.health, enemy.name, enemy.health);


	  if (enemy.health <= 0)
	    {
	      printf ("%s Has been defeated \n", enemy.name);
	      return 2;
	    }
	}
    }

  else if (!strcmp (battle_optionp, "run") || !strcmp (battle_optionp, "r"))

    {
      int roll_flee_result = roll_die ();

      if (roll_flee_result >= 3)
	{

	  printf ("you have successfully fled \n");
	  return 3;
	}


      else
	{

	  printf ("you have failled to flee. You take 1 damage \n");
	  player.health = player.health - 1;
	  return battle_no_magic (enemy);
	}
    }

  else if (!strcmp (battle_optionp, "m") || !strcmp (battle_optionp, "magic"))

    {
      printf("You have already used magic for this fight. You lose 1 health for trying to use it again \n");
      player.health = player.health - 1;
      
      return battle_no_magic (enemy);
    }


  else
    if (!strcmp (battle_optionp, "i") || !strcmp (battle_optionp, "inspect"))
    {
      printf ("%s \n", enemy.description);
      return battle_no_magic (enemy);
    }
  else
    {
     return battle_no_magic (enemy);
    }
}





//Runs Battle and returns a number. Used for testing.
/*
int
battle_result_func (struct person enemy)
{
  int result_num = battle (enemy);

  if (result_num == 1)
    {
      printf (" Game Over\n");
    }
  if (result_num == 2)
    {
      printf ("You Win");
    }
}
*/

void
delay (int number_of_seconds)
{
  // Converting time into milli_seconds 
  int milli_seconds = 1000 * number_of_seconds;
  // Storing start time 
  clock_t start_time = clock ();
  // looping till required time is not achieved 
  while (clock () < start_time + milli_seconds);
}

struct person
return_random_enemy ()
{

  struct person monst1 = create_enemy_manually_fully ("Orc", 5,
						      5,
						      "Orc: A fairly tough monster. Packing some serious heat. Be Careful",
						      "normal");
  struct person monst2 = create_enemy_manually_fully ("Goblin",
						      2, 2,
						      "Goblin: A weak creature. Should go down with minimal effort",
						      "electric");
  struct person monst3 = create_enemy_manually_fully ("Giant Grab", 3, 3,
						      "Giant Crab: Delicious with butter..... if you can survive its big meaty claws",
						      "water");
  struct person monst4 = create_enemy_manually_fully ("Giant Lizard", 4, 4,
						      "Giant Lizard. Breathes Fires hotter than the surface of the sun",
						      "fire");
  int mon = roll_die_manual (4);
  if (mon == 1)
    {
      return monst1;
    }
  if (mon == 2)
    {
      return monst2;
    }
  if (mon == 3)
    {
      return monst3;
    }
 if (mon == 4)
    {
      return monst4;
    }



}

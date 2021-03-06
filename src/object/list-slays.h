/*
 * File: list-slays.h
 * Purpose: List of slay/brand types
 *
 * Entries in this table should be in ascending order of multiplier, to
 * ensure that the highest one takes precedence.
 *
 * name
 * object flag
 * mon flag - which type of monster is vulnerable?
 * resist flag - monsters with this ignore the brand
 * vuln flag - monsters with this take extra damage (mult += 1)
 * nonweap - whether or not this slay/brand can be provided by nonweapons
 * ranged verb - when missiles have this slay
 * melee verb - when melee weapons have this slay
 * verb describing what the thing does when it is active
 * description of affected creatures
 * brand name
 */
/*   name		object flag		mon flag	res flag 	vuln flag		nonweap	ranged verb			melee verb			active verb			affected creatures							brand name */
SLAY(XXX, 		FLAG_END,       FLAG_END,  	FLAG_END,	FLAG_END,		FALSE,	NULL,	    		NULL,      			NULL,         		"normal creatures", 						NULL)
SLAY(IMPACT,	OF_IMPACT,		FLAG_END,	FLAG_END,	RF_HURT_ROCK,	TRUE,	"bores into",		"hack at",			"hums",				"creatures made of stone",					NULL)
SLAY(TUNNEL,	OF_TUNNEL,		FLAG_END,	FLAG_END,	RF_HURT_ROCK,	FALSE,	"bores into",		"hack at",			"hums",				"creatures made of stone",					NULL)
SLAY(LIGHT,		OF_LIGHT,		FLAG_END,	FLAG_END,	RF_HURT_LIGHT,	FALSE,	"dazzles",			"dazzle",			"glows",			"creatures hurt by light",					NULL)
SLAY(ANIMAL,	OF_SLAY_ANIMAL, RF_ANIMAL, 	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"animals", 									NULL)
SLAY(EVIL,		OF_SLAY_EVIL,   RF_EVIL,   	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"evil creatures", 							NULL)
SLAY(UNDEAD,	OF_SLAY_UNDEAD, RF_UNDEAD, 	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"undead", 									NULL)
SLAY(DEMON,		OF_SLAY_DEMON,  RF_DEMON,  	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"demons", 									NULL)
SLAY(ORC,		OF_SLAY_ORC,    RF_ORC,    	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"orcs", 									NULL)
SLAY(TROLL,		OF_SLAY_TROLL,  RF_TROLL,  	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"trolls", 									NULL)
SLAY(GIANT,		OF_SLAY_GIANT,  RF_GIANT,  	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"giants", 									NULL)
SLAY(DRAGON,	OF_SLAY_DRAGON, RF_DRAGON, 	FLAG_END,	FLAG_END,		TRUE,	"pierces",  		"smite",   			"glows",      		"dragons", 									NULL)
SLAY(ACID,		OF_BRAND_ACID,  FLAG_END,  	RF_IM_ACID,	FLAG_END,		TRUE,	"dissolves", 		"dissolve", 		"spits",      		"creatures not resistant to acid", 			"acid")
SLAY(ELEC,		OF_BRAND_ELEC,  FLAG_END,  	RF_IM_ELEC,	FLAG_END,		TRUE,	"shocks",     		"shock",     		"crackles",   		"creatures not resistant to electricity", 	"lightning")
SLAY(FIRE,		OF_BRAND_FIRE,  FLAG_END,  	RF_IM_FIRE,	RF_HURT_FIRE,	TRUE,	"burns",    		"burn",    			"flares",     		"creatures not resistant to fire", 			"flames")
SLAY(COLD,		OF_BRAND_COLD,  FLAG_END,  	RF_IM_COLD,	RF_HURT_COLD,	TRUE,	"freezes" , 		"freeze",  			"grows cold", 		"creatures not resistant to cold", 			"frost")
SLAY(POISON,	OF_BRAND_POIS,  FLAG_END,  	RF_IM_POIS,	FLAG_END,		TRUE,	"poisons",  		"poison",  			"seethes",    		"creatures not resistant to poison", 		"venom")

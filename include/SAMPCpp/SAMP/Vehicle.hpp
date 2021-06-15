#pragma once

#include SAMPCPP_PCH

#include <SAMPCpp/Core/Color.hpp>

namespace samp_cpp
{

enum class CarModType
{
	Spoiler		= 0,
	Hood		= 1,
	Roof		= 2,
	SideSkirt	= 3,
	Lamps		= 4,
	Nitro		= 5,
	Exhaust		= 6,
	Wheels		= 7,
	Stereo		= 8,
	Hydraulics	= 9,
	FrontBumper	= 10,
	RearBumper	= 11,
	VentRight	= 12,
	VentLeft	= 13
};

enum class VehicleParams
{
	Unset	= -1,
	Off		= 0,
	On		= 1
};

enum class VehicleModelInfo
{
	Size			= 1,
	FrontSeat		= 2,
	RearSeat		= 3,
	PetrolCap		= 4,
	WheelsFront		= 5,
	WheelsRear		= 6,
	WheelsMid		= 7,
	FrontBumperZ	= 8,
	RearBumperZ		= 9
};

class Vehicle
{
public:
	enum Model
	{
		Landstalker				= 400,
		Bravura					= 401,
		Buffalo					= 402,
		Linerunner				= 403,
		Perrenial				= 404,
		Sentinel				= 405,
		Dumper					= 406,
		Firetruck				= 407,
		Trashmaster				= 408,
		Stretch					= 409,
		Manana					= 410,
		Infernus				= 411,
		Voodoo					= 412,
		Pony					= 413,
		Mule					= 414,
		Cheetah					= 415,
		Ambulance				= 416,
		Leviathan				= 417,
		Moonbeam				= 418,
		Esperanto				= 419,
		Taxi					= 420,
		Washington				= 421,
		Bobcat					= 422,
		MrWhoopee				= 423,
		BFInjection				= 424,
		Hunter					= 425,
		Premier					= 426,
		Enforcer				= 427,
		Securicar				= 428,
		Banshee					= 429,
		Predator				= 430,
		Bus						= 431,
		Rhino					= 432,
		Barracks				= 433,
		Hotknife				= 434,
		ArticleTrailer1			= 435,
		Previon					= 436,
		Coach					= 437,
		Cabbie					= 438,
		Stallion				= 439,
		Rumpo					= 440,
		RCBandit				= 441,
		Romero					= 442,
		Packer					= 443,
		Monster					= 444,
		Admiral					= 445,
		Squalo					= 446,
		Seasparrow				= 447,
		Pizzaboy				= 448,
		Tram					= 449,
		ArticleTrailer2			= 450,
		Turismo					= 451,
		Speeder					= 452,
		Reefer					= 453,
		Tropic					= 454,
		Flatbed					= 455,
		Yankee					= 456,
		Caddy					= 457,
		Solair					= 458,
		BerkleysRCVan			= 459,
		Skimmer					= 460,
		PCJ600					= 461,
		Faggio					= 462,
		Freeway					= 463,
		RCBaron					= 464,
		RCRaider				= 465,
		Glendale				= 466,
		Oceanic					= 467,
		Sanchez					= 468,
		Sparrow					= 469,
		Patriot					= 470,
		Quad					= 471,
		Coastguard				= 472,
		Dinghy					= 473,
		Hermes					= 474,
		Sabre					= 475,
		Rustler					= 476,
		Zr350					= 477,
		Walton					= 478,
		Regina					= 479,
		Comet					= 480,
		BMX						= 481,
		Burrito					= 482,
		Camper					= 483,
		Marquis					= 484,
		Baggage					= 485,
		Dozer					= 486,
		Maverick				= 487,
		SanNewsMaverick			= 488,
		Rancher					= 489,
		FBIRancher				= 490,
		Virgo					= 491,
		Greenwood				= 492,
		Jetmax					= 493,
		HotringRacer			= 494,
		Sandking				= 495,
		BlistaCompact			= 496,
		PoliceMaverick			= 497,
		Boxville				= 498,
		Benson					= 499,
		Mesa					= 500,
		RCGoblin				= 501,
		HotringRacerA			= 502,
		HotringRacerB			= 503,
		BloodringBanger			= 504,
		RancherLure				= 505,
		SuperGT					= 506,
		Elegant					= 507,
		Journey					= 508,
		Bike					= 509,
		MountainBike			= 510,
		Beagle					= 511,
		Cropdust				= 512,
		Stuntplane				= 513,
		Tanker					= 514,
		Roadtrain				= 515,
		Nebula					= 516,
		Majestic				= 517,
		Buccaneer				= 518,
		Shamal					= 519,
		Hydra					= 520,
		FCR900					= 521,
		NRG500					= 522,
		HPV1000					= 523,
		CementTruck				= 524,
		TowTruck				= 525,
		Fortune					= 526,
		Cadrona					= 527,
		FBITruck				= 528,
		Willard					= 529,
		Forklift				= 530,
		Tractor					= 531,
		Combine					= 532,
		Feltzer					= 533,
		Remington				= 534,
		Slamvan					= 535,
		Blade					= 536,
		Freight					= 537,
		Brownstreak				= 538,
		Vortex					= 539,
		Vincent					= 540,
		Bullet					= 541,
		Clover					= 542,
		Sadler					= 543,
		FireTruckLA				= 544,
		Hustler					= 545,
		Intruder				= 546,
		Primo					= 547,
		Cargobob				= 548,
		Tampa					= 549,
		Sunrise					= 550,
		Merit					= 551,
		UtilityVan				= 552,
		Nevada					= 553,
		Yosemite				= 554,
		Windsor					= 555,
		MonsterA				= 556,
		MonsterB				= 557,
		Uranus					= 558,
		Jester					= 559,
		Sultan					= 560,
		Stratum					= 561,
		Elegy					= 562,
		Raindance				= 563,
		RCTiger					= 564,
		Flash					= 565,
		Tahoma					= 566,
		Savanna					= 567,
		Bandito					= 568,
		FreightFlatTrailer		= 569,
		StreakTrailer			= 570,
		Kart					= 571,
		Mower					= 572,
		Duneride				= 573,
		Sweeper					= 574,
		Broadway				= 575,
		Tornado					= 576,
		AT400					= 577,
		DFT30					= 578,
		Huntley					= 579,
		Stafford				= 580,
		BF400					= 581,
		Newsvan					= 582,
		Tug						= 583,
		PetrolTrailer			= 584,
		Emperor					= 585,
		Wayfarer				= 586,
		Euros					= 587,
		Hotdog					= 588,
		Club					= 589,
		FreightBoxTrailer		= 590,
		ArticleTrailer3			= 591,
		Andromada				= 592,
		Dodo					= 593,
		RCCam					= 594,
		Launch					= 595,
		PoliceCarLSPD			= 596,
		PoliceCarSFPD			= 597,
		PoliceCarLVPD			= 598,
		PoliceRanger			= 599,
		Picador					= 600,
		SWAT					= 601,
		Alpha					= 602,
		Phoenix					= 603,
		GlendaleShit			= 604,
		SadlerShit				= 605,
		BaggageTrailerA			= 606,
		BaggageTrailerB			= 607,
		TugStairsTrailer		= 608,
		Boxburg					= 609,
		FarmTrailer				= 610,
		UtilityTrailer			= 611,
	};

	Vehicle(int32_t id_)
		: _id(id_)
	{
	}

	// Source: original SA-MP wiki
	constexpr static Color Colors[256] = {
		// The existing colours from San Andreas
		0x000000FF, 0xF5F5F5FF, 0x2A77A1FF, 0x840410FF, 0x263739FF, 0x86446EFF, 0xD78E10FF, 0x4C75B7FF, 0xBDBEC6FF, 0x5E7072FF,
		0x46597AFF, 0x656A79FF, 0x5D7E8DFF, 0x58595AFF, 0xD6DAD6FF, 0x9CA1A3FF, 0x335F3FFF, 0x730E1AFF, 0x7B0A2AFF, 0x9F9D94FF,
		0x3B4E78FF, 0x732E3EFF, 0x691E3BFF, 0x96918CFF, 0x515459FF, 0x3F3E45FF, 0xA5A9A7FF, 0x635C5AFF, 0x3D4A68FF, 0x979592FF,
		0x421F21FF, 0x5F272BFF, 0x8494ABFF, 0x767B7CFF, 0x646464FF, 0x5A5752FF, 0x252527FF, 0x2D3A35FF, 0x93A396FF, 0x6D7A88FF,
		0x221918FF, 0x6F675FFF, 0x7C1C2AFF, 0x5F0A15FF, 0x193826FF, 0x5D1B20FF, 0x9D9872FF, 0x7A7560FF, 0x989586FF, 0xADB0B0FF,
		0x848988FF, 0x304F45FF, 0x4D6268FF, 0x162248FF, 0x272F4BFF, 0x7D6256FF, 0x9EA4ABFF, 0x9C8D71FF, 0x6D1822FF, 0x4E6881FF,
		0x9C9C98FF, 0x917347FF, 0x661C26FF, 0x949D9FFF, 0xA4A7A5FF, 0x8E8C46FF, 0x341A1EFF, 0x6A7A8CFF, 0xAAAD8EFF, 0xAB988FFF,
		0x851F2EFF, 0x6F8297FF, 0x585853FF, 0x9AA790FF, 0x601A23FF, 0x20202CFF, 0xA4A096FF, 0xAA9D84FF, 0x78222BFF, 0x0E316DFF,
		0x722A3FFF, 0x7B715EFF, 0x741D28FF, 0x1E2E32FF, 0x4D322FFF, 0x7C1B44FF, 0x2E5B20FF, 0x395A83FF, 0x6D2837FF, 0xA7A28FFF,
		0xAFB1B1FF, 0x364155FF, 0x6D6C6EFF, 0x0F6A89FF, 0x204B6BFF, 0x2B3E57FF, 0x9B9F9DFF, 0x6C8495FF, 0x4D8495FF, 0xAE9B7FFF,
		0x406C8FFF, 0x1F253BFF, 0xAB9276FF, 0x134573FF, 0x96816CFF, 0x64686AFF, 0x105082FF, 0xA19983FF, 0x385694FF, 0x525661FF,
		0x7F6956FF, 0x8C929AFF, 0x596E87FF, 0x473532FF, 0x44624FFF, 0x730A27FF, 0x223457FF, 0x640D1BFF, 0xA3ADC6FF, 0x695853FF,
		0x9B8B80FF, 0x620B1CFF, 0x5B5D5EFF, 0x624428FF, 0x731827FF, 0x1B376DFF, 0xEC6AAEFF, 0x000000FF,
		// SA-MP extended colours (0.3x)
		0x177517FF, 0x210606FF, 0x125478FF, 0x452A0DFF, 0x571E1EFF, 0x010701FF, 0x25225AFF, 0x2C89AAFF, 0x8A4DBDFF, 0x35963AFF,
		0xB7B7B7FF, 0x464C8DFF, 0x84888CFF, 0x817867FF, 0x817A26FF, 0x6A506FFF, 0x583E6FFF, 0x8CB972FF, 0x824F78FF, 0x6D276AFF,
		0x1E1D13FF, 0x1E1306FF, 0x1F2518FF, 0x2C4531FF, 0x1E4C99FF, 0x2E5F43FF, 0x1E9948FF, 0x1E9999FF, 0x999976FF, 0x7C8499FF,
		0x992E1EFF, 0x2C1E08FF, 0x142407FF, 0x993E4DFF, 0x1E4C99FF, 0x198181FF, 0x1A292AFF, 0x16616FFF, 0x1B6687FF, 0x6C3F99FF,
		0x481A0EFF, 0x7A7399FF, 0x746D99FF, 0x53387EFF, 0x222407FF, 0x3E190CFF, 0x46210EFF, 0x991E1EFF, 0x8D4C8DFF, 0x805B80FF,
		0x7B3E7EFF, 0x3C1737FF, 0x733517FF, 0x781818FF, 0x83341AFF, 0x8E2F1CFF, 0x7E3E53FF, 0x7C6D7CFF, 0x020C02FF, 0x072407FF,
		0x163012FF, 0x16301BFF, 0x642B4FFF, 0x368452FF, 0x999590FF, 0x818D96FF, 0x99991EFF, 0x7F994CFF, 0x839292FF, 0x788222FF,
		0x2B3C99FF, 0x3A3A0BFF, 0x8A794EFF, 0x0E1F49FF, 0x15371CFF, 0x15273AFF, 0x375775FF, 0x060820FF, 0x071326FF, 0x20394BFF,
		0x2C5089FF, 0x15426CFF, 0x103250FF, 0x241663FF, 0x692015FF, 0x8C8D94FF, 0x516013FF, 0x090F02FF, 0x8C573AFF, 0x52888EFF,
		0x995C52FF, 0x99581EFF, 0x993A63FF, 0x998F4EFF, 0x99311EFF, 0x0D1842FF, 0x521E1EFF, 0x42420DFF, 0x4C991EFF, 0x082A1DFF,
		0x96821DFF, 0x197F19FF, 0x3B141FFF, 0x745217FF, 0x893F8DFF, 0x7E1A6CFF, 0x0B370BFF, 0x27450DFF, 0x071F24FF, 0x784573FF,
		0x8A653AFF, 0x732617FF, 0x319490FF, 0x56941DFF, 0x59163DFF, 0x1B8A2FFF, 0x38160BFF, 0x041804FF, 0x355D8EFF, 0x2E3F5BFF,
		0x561A28FF, 0x4E0E27FF, 0x706C67FF, 0x3B3E42FF, 0x2E2D33FF, 0x7B7E7DFF, 0x4A4442FF, 0x28344EFF
	};

	
	int32_t id() const { return _id; }

	bool valid() const;

	// A shorthand for this->getVirtualWorld()
	int32_t world() const { return this->getVirtualWorld(); }

	// A shorthand for this->getPosition()
	Vec3f pos() const { return this->getPosition(); }

	// A shorthand for this->getVelocity()
	Vec3f vel() const { return this->getVelocity(); }

	// A shorthand for this->getHealth()
	float hp() const { return this->getHealth(); }

	// A shorthand for this->getDistanceFromPoint()
	float dist(Vec3f const& point_) const { return this->getDistanceFromPoint(point_); }

	// A shorthand for this->getRotationQuat()
	Quat rotQuat() const { return this->getRotationQuat(); }

	static Vehicle create(Model model_, float x_, float y_, float z_, float rotation_, int color1_, int color2_, int respawnDelay_, bool addSiren_ = false);
	static Vehicle create(Model model_, Vec3f const& pos_, float rotation_, int color1_, int color2_, int respawnDelay_, bool addSiren_ = false);
	static bool manualEngineAndLights();
	static int getComponentType(int component_);
	static bool getModelInfo(Model model_, VehicleModelInfo type_, float * X_, float * Y_, float * Z_);

	float getDistanceFromPoint(Vec3f const& point_) const;
	float getDistanceFromPoint(float x_, float y_, float z_) const;
	bool destroy();
	bool isStreamedIn(int forPlayerIdx_) const;
	Vec3f getPosition() const;
	bool setPosition(Vec3f const& pos_);
	bool setPosition(float x_, float y_, float z_);
	float getZAngle() const;
	Quat getRotationQuat() const;
	bool setZAngle(float angle_);
	bool setParamsForPlayer(int playerIdx_, int objective_, int doorsLocked_);
	bool setParamsEx(int engine_, int lights_, int alarm_, int doors_, int bonnet_, int boot_, int objective_);
	bool getParamsEx(int * engine, int * lights, int * alarm, int * doors, int * bonnet, int * boot, int * objective) const;
	int getSirenState() const;
	bool setCarDoorParams(int driver_, int passenger_, int backleft_, int backright_);
	bool getCarDoorParams(int * driver, int * passenger, int * backleft, int * backright) const;
	bool setCarWindowParams(int driver_, int passenger_, int backleft_, int backright_);
	bool getCarWindowParams(int * driver, int * passenger, int * backleft, int * backright) const;
	bool setToRespawn();
	bool linkToInterior(int interiorIdx_);
	bool addComponent(int componentIdx_);
	bool removeComponent(int componentIdx_);
	bool changeColor(int color1_, int color2_);
	bool changePaintjob(int paintjobIdx_);
	bool setHealth(float health_);
	float getHealth() const;
	bool attachTrailer(Vehicle trailer_);
	bool detachTrailer();
	bool isTrailerAttached() const;
	Vehicle getTrailer() const;
	bool setNumberPlate(std::string const& numberplate_);
	bool setNumberPlate(char const* numberplate_);
	Model getModel() const;
	int getComponentInSlot(int slot_) const;
	bool repair();
	Vec3f getVelocity() const;
	bool setVelocity(Vec3f const& vel_);
	bool setVelocity(float x_, float y_, float z_);
	bool setAngularVelocity(Vec3f const& vel_);
	bool setAngularVelocity(float x_, float y_, float z_);
	bool getDamageStatus(int * panels, int * doors, int * lights, int * tires) const;
	bool updateDamageStatus(int panels_, int doors_, int lights_, int tires_);
	bool setVirtualWorld(int worldIdx_);
	int getVirtualWorld() const;
private:
	int32_t _id;
};

}
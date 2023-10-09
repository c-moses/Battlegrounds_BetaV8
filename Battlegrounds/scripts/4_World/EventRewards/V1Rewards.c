const static ref array<string> BGObjective = {"Rev_M110_Black","Rev_SR25_Black","Rev_M2010_Tan","Rev_R700","Rev_WA2000","Rev_M200_Black","Rev_HK417","Rev_SRSA2","Rev_ARX160","Rev_CDX50","Rev_Tac21","Rev_Beowulf","Rev_HT76","Rev_M96","Rev_MG3"};

class V1Rewards 
{
    static void AddRewardLoot(EntityAI crate) 
    {
        int i;

		int rndIndex;
		EntityAI obj;
		EntityAI attachment;

        int firstrandomIndex = Math.RandomInt(0, BGObjective.Count() - 1);

		obj = crate.GetInventory().CreateInInventory(BGObjective[firstrandomIndex]);

		switch (BGObjective[firstrandomIndex])
		{
			case "Rev_M110_Black":
				Rev_M110_Black m110Instance;
				if (Rev_M110_Black.CastTo(m110Instance, obj))
				{
					m110Instance.GetInventory().CreateAttachment("HuntingOptic");
					m110Instance.SpawnAttachedMagazine("Rev_Mag_M110_20Rnd");
				}
				for (i = 0; i < 2; i++) crate.GetInventory().CreateInInventory("Rev_Mag_M110_20Rnd");
				break;

			case "Rev_SR25_Black":
				Rev_SR25_Black sr25Instance;
				if (Rev_SR25_Black.CastTo(sr25Instance, obj))
				{
					sr25Instance.GetInventory().CreateAttachment("HuntingOptic");
					sr25Instance.SpawnAttachedMagazine("Rev_Mag_SR25_20Rnd");
				}
				for (i = 0; i < 2; i++) crate.GetInventory().CreateInInventory("Rev_Mag_SR25_20Rnd");
				break;

			case "Rev_M2010_Tan":
				Rev_M2010_Tan m2010Instance;
				if (Rev_M2010_Tan.CastTo(m2010Instance, obj))
				{
					m2010Instance.GetInventory().CreateAttachment("HuntingOptic");
					m2010Instance.SpawnAttachedMagazine("Rev_Mag_M2010_10rnd");
				}
				for (i = 0; i < 2; i++) crate.GetInventory().CreateInInventory("Rev_Mag_M2010_10rnd");
				break;

			case "Rev_R700":
				Rev_R700 r700Instance;
				if (Rev_R700.CastTo(r700Instance, obj))
				{
					r700Instance.GetInventory().CreateAttachment("HuntingOptic");
					r700Instance.SpawnAttachedMagazine("Rev_Mag_R700_7rnd");
				}
				for (i = 0; i < 2; i++) crate.GetInventory().CreateInInventory("Rev_Mag_R700_7rnd");
				break;

			case "Rev_WA2000":
				Rev_WA2000 wa2000Instance;
				if (Rev_WA2000.CastTo(wa2000Instance, obj))
				{
					wa2000Instance.GetInventory().CreateAttachment("HuntingOptic");
					wa2000Instance.SpawnAttachedMagazine("Rev_Mag_WA2000_5rnd");
				}
				for (i = 0; i < 2; i++) crate.GetInventory().CreateInInventory("Rev_Mag_WA2000_5rnd");
				break;

			case "Rev_SRSA2":
				Rev_SRSA2 srsa2Instance = Rev_SRSA2.Cast(obj);
				if (srsa2Instance)
				{
					srsa2Instance.GetInventory().CreateAttachment("HuntingOptic");
					srsa2Instance.SpawnAttachedMagazine("Rev_Mag_SRSA2_10rnd");
				}
				break;

			case "Rev_HK417":
				Rev_HK417 hk417Instance = Rev_HK417.Cast(obj);
				if (hk417Instance)
				{
					attachment = hk417Instance.GetInventory().CreateAttachment("ReflexOptic");
					if (attachment) attachment.GetInventory().CreateAttachment("Battery9V");
					hk417Instance.SpawnAttachedMagazine("Rev_Mag_HK417_20rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_HK417_20rnd");
				break;

			case "Rev_M200_Black":
				Rev_M200_Black m200Instance = Rev_M200_Black.Cast(obj);
				if (m200Instance)
				{
					m200Instance.GetInventory().CreateAttachment("HuntingOptic");
					m200Instance.SpawnAttachedMagazine("Rev_Mag_M200_7rnd");
				}
				break;

			case "Rev_ARX160":
				Rev_ARX160 arx160Instance = Rev_ARX160.Cast(obj);
				if (arx160Instance)
				{
					attachment = arx160Instance.GetInventory().CreateAttachment("ReflexOptic");
					if (attachment) attachment.GetInventory().CreateAttachment("Battery9V");
					arx160Instance.SpawnAttachedMagazine("Rev_Mag_ARX160_30rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_ARX160_30rnd");
				break;

			case "Rev_CDX50":
				Rev_CDX50 cdx50Instance = Rev_CDX50.Cast(obj);
				if (cdx50Instance)
				{
					cdx50Instance.GetInventory().CreateAttachment("HuntingOptic");
					cdx50Instance.SpawnAttachedMagazine("Rev_Mag_CDX50_5rnd");
				}
				break;

			case "Rev_Tac21":
				Rev_Tac21 tac21Instance = Rev_Tac21.Cast(obj);
				if (tac21Instance)
				{
					tac21Instance.GetInventory().CreateAttachment("HuntingOptic");
					tac21Instance.GetInventory().CreateAttachment("Rev_Tac21_Bttstck");
					tac21Instance.SpawnAttachedMagazine("Rev_Mag_Tac21_5rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_Tac21_5rnd");
				break;

			case "Rev_Beowulf":
				Rev_Beowulf beowulfInstance = Rev_Beowulf.Cast(obj);
				if (beowulfInstance)
				{
					attachment = beowulfInstance.GetInventory().CreateAttachment("ReflexOptic");
					if (attachment) attachment.GetInventory().CreateAttachment("Battery9V");
					beowulfInstance.SpawnAttachedMagazine("Rev_Mag_Beowulf_10rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_Beowulf_10rnd");
				break;

			case "Rev_HT76":
				Rev_HT76 ht76Instance = Rev_HT76.Cast(obj);
				if (ht76Instance)
				{
					attachment = ht76Instance.GetInventory().CreateAttachment("ReflexOptic");
					if (attachment) attachment.GetInventory().CreateAttachment("Battery9V");
					ht76Instance.SpawnAttachedMagazine("Rev_Mag_HT76_30Rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_HT76_30Rnd");
				break;

			case "Rev_M96":
				Rev_M96 m96Instance = Rev_M96.Cast(obj);
				if (m96Instance)
				{
					m96Instance.GetInventory().CreateAttachment("HuntingOptic");
					m96Instance.SpawnAttachedMagazine("Rev_Mag_M96_5rnd");
				}
				break;

			case "Rev_MG3":
				Rev_MG3 mg3Instance;
				if (Rev_MG3.CastTo(mg3Instance, obj))
				{
					mg3Instance.SpawnAttachedMagazine("Rev_Mag_MG3_75rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_MG3_75rnd");
				break;

			default:
				Rev_MG3 defaultmg3Instance;
				if (Rev_MG3.CastTo(defaultmg3Instance, crate.GetInventory().CreateInInventory("Rev_MG3")))
				{
					defaultmg3Instance.SpawnAttachedMagazine("Rev_Mag_MG3_75rnd");
				}
				for (i = 0; i < 1; i++) crate.GetInventory().CreateInInventory("Rev_Mag_MG3_75rnd");
				break;
		}

		obj = crate.GetInventory().CreateInInventory("Keycard_Orange");

		obj = crate.GetInventory().CreateAttachment("MVS_Rucksack_Black");

		obj = crate.GetInventory().CreateAttachment("MVS_Combat_Vest_Heavy_Black");
		if (obj)
		{
			attachment = obj.GetInventory().CreateAttachment("MVS_Heavy_Pouch_Black");
		}

		obj = crate.GetInventory().CreateAttachment("MVS_Altyn_Black");
		if (obj)
		{
			attachment = obj.GetInventory().CreateAttachment("MVS_Altyn_Visor_Black");
		}
	}
};
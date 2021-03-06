#pragma once

#include "util.h"
#include "villain_type.h"

struct EnemyInfo;

RICH_ENUM(EnemyId,
  KNIGHTS,
  WARRIORS,
  DWARVES,
  ELVES,
  ELEMENTALIST,
  ELEMENTALIST_ENTRY,
  LIZARDMEN,
  RED_DRAGON,
  GREEN_DRAGON,
  MINOTAUR,

  VILLAGE,
  BANDITS,
  NO_AGGRO_BANDITS,
  COTTAGE_BANDITS,
  ENTS,
  DRIADS,
  CYCLOPS,
  SHELOB,
  HYDRA,
  KRAKEN,
  ANTS_OPEN,
  ANTS_CLOSED,
  ANTS_CLOSED_SMALL,
  CEMETERY,
  CEMETERY_ENTRY,

  DARK_ELVES,
  DARK_ELVES_ENTRY,
  DARK_ELF_CAVE,
  GNOMES,
  GNOMES_ENTRY,
  OGRE_CAVE,
  HARPY_CAVE,
  ORC_CAVE,
  DEMON_DEN_ABOVE,
  DEMON_DEN,
  ORC_VILLAGE,
  SOKOBAN,
  SOKOBAN_ENTRY,
  WITCH,
  DWARF_CAVE,
  KOBOLD_CAVE,
  HUMAN_COTTAGE,
  UNICORN_HERD,
  ELVEN_COTTAGE,
  ADA_GOLEMS,

  TUTORIAL_VILLAGE
);


struct ExternalEnemy;
struct SettlementInfo;
class TribeId;

class EnemyFactory {
  public:
  EnemyFactory(RandomGen&);
  EnemyInfo get(EnemyId);
  vector<ExternalEnemy> getExternalEnemies();
  vector<ExternalEnemy> getHalloweenKids();
  vector<EnemyInfo> getVaults(TribeAlignment, TribeId allied);

  RandomGen& random;

  private:
  EnemyInfo getById(EnemyId);
};

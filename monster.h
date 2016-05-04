/* Copyright (C) 2013-2014 Michal Brzozowski (rusolis@poczta.fm)

   This file is part of KeeperRL.

   KeeperRL is free software; you can redistribute it and/or modify it under the terms of the
   GNU General Public License as published by the Free Software Foundation; either version 2
   of the License, or (at your option) any later version.

   KeeperRL is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
   even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License along with this program.
   If not, see http://www.gnu.org/licenses/ . */

#ifndef _MONSTER_H
#define _MONSTER_H

#include "enums.h"
#include "controller.h"

class Creature;
class MonsterAIFactory;

class Monster : public Controller {
  public:
  Monster(Creature*, const MonsterAIFactory&);
  
  virtual void you(MsgType type, const string& param) override;
  virtual void you(MsgType type, const vector<string>& param) override;
  virtual void you(const string& param) override;
  
  virtual void makeMove() override;
  virtual bool isPlayer() const override;
  virtual const MapMemory& getMemory() const;

  virtual void onBump(Creature*) override;

  static ControllerFactory getFactory(MonsterAIFactory);

  SERIALIZATION_DECL(Monster);

  private:
  PMonsterAI SERIAL(monsterAI);
};

#endif

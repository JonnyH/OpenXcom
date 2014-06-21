/*
 * Copyright 2010-2014 OpenXcom Developers.
 *
 * This file is part of OpenXcom.
 *
 * OpenXcom is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenXcom is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with OpenXcom.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef OPENXCOM__LOADGAMESTATE
#define OPENXCOM__LOADGAMESTATE

#include "Engine/State.h"
#include <string>
#include "OptionsBaseState.h"
#include "Savegame/SavedGame.h"

namespace OpenXcom
{

class Text;

/**
 * Loads a saved game, with an optional message.
 */
class LoadGameState : public State
{
private:
	OptionsOrigin _origin;
	Text *_txtStatus;
	std::string _filename;
public:
	/// Creates the Load Game state.
	LoadGameState(Game *game, OptionsOrigin origin, const std::string &filename);
	/// Creates the Load Game state.
	LoadGameState(Game *game, OptionsOrigin origin, SaveType type);
	/// Cleans up the Load Game state.
	~LoadGameState();
	/// Creates the interface.
	void buildUi();
	/// Loads the game.
	void init();
};

}

#endif

#pragma once
#include <string>
#include <vector>

class Message
{
public:
	Message(int id, int characterId, std::string text, int musicId, std::vector<int> sfxId,
		int spriteId, int animationId, int clothesId, int bgImageId, int nextMessage, int nextEvent,
		int messageX, int messageY, int characterX, int characterY, std::vector<int> showCharacters)
	{
		this->_id = id;
		this->_characterId = characterId;
		this->_text = text;
		this->_musicId = musicId;
		this->_sfxId = sfxId;
		this->_spriteId = spriteId;
		this->_animationId = animationId;
		this->_clothesId = clothesId;
		this->_bgImageId = bgImageId;
		this->_nextMessage = nextMessage;
		this->_nextEvent = nextEvent;
		this->_messageX = messageX;
		this->_messageY = messageY;
		this->_characterX = characterX;
		this->_characterY = characterY;
		this->_showCharacters = showCharacters;
	}
	int getId();
	int getCharacterId();
	std::string getText();
	int getMusicId();
	std::vector<int> getAllSfxId();
	int getSpriteId();
	int getAnimationId();
	int getClothesId();
	int getBgImageId();
	int getNextMessage();
	int getNextEvent();
	int getMessageX();
	int getMessageY();
	int getCharacterX();
	int getCharacterY();
	std::vector<int> getShowCharacters();

private:
	int _id;
	int _characterId; // 0 = none, 1 = protagonist, >1 = characters
	std::string _text;
	int _musicId;
	std::vector<int> _sfxId;
	int _spriteId;
	int _animationId;
	int _clothesId;
	int _bgImageId;
	int _nextMessage;
	int _nextEvent;
	int _messageX;
	int _messageY;
	int _characterX;
	int _characterY;
	std::vector<int> _showCharacters;
};


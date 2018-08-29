#pragma once
#ifndef HALL_FUNCTION
#define HALL_FUNCTION
//hallFunction.h

//hallFunction.cpp
//Author:hanyuu
//Commit:
//	提供控制大厅的类

#include <string>
#include <exception>
#include "reader/CreatorReader.h"
#include "hallPlayer.h"
#include "hallTools.h"
#include <boost/thread/thread.hpp>
#include"ui/CocosGUI.h"
#include"ui/UIWidget.h"
//#include"chatroom_server.hpp"

using namespace cocos2d;

//#include "proj.win32/hallFunction.h"
class Hall
{
public:
	Hall(Scene *);
	virtual ~Hall();
	/*
	Function name:feedPlayerInformation
	Description:以数组形式注册玩家信息
	Created:180824
	Parameter：HallPlayer：玩家信息数组指针，用于传入玩家信息
	Return Code:VOID
	Authro:Hanyuu
	*/
	void feedPlayerInformation(HallPlayer *);

	/*
	Function name:sendMessage
	Description:发送聊天信息
	Created:180826
	Parameter:String:待发送的信息变量
	Return Code:bool:发送成功判断
	Author:Hanyuu
	*/
	bool sendChatMessage(std::string) const;

	/*
	Function name:getEditMessage
	Description:获取信息编辑框中文本
	Created:180828
	Parameter:VOID
	Return:String:返回的文本
	Author:Hanyuu
	*/
	std::string getEditMessage() const;

	/*
	Function name:clearEditBox
	Description:清除信息编辑框中的文本 
	Created:20180829
	Parameter:VOID
	Return:VOID
	Author:Hanyuu
	*/
	void clearEditBox();

	//玩家数量
	static unsigned playerNumber;
protected:
private:
	Scene * m_scene;
	Size m_size;
	cocos2d::ui::Text * m_record;
	cocos2d::ui::Button * m_sendButton;
	cocos2d::ui::TextField * m_editBox;
};

#endif	
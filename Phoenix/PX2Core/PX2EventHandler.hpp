// Copyright 2013-2014 LinkJoy, Inc. All Rights Reserved.

#ifndef PX2EVENTHANDLER_HPP
#define PX2EVENTHANDLER_HPP

#include "PX2EventChannel.hpp"

namespace PX2
{

	class Event;
	class EventWorld;

	/// ��Ϣ���
	class EventHandler
	{
	public:
		EventHandler ();
		virtual ~EventHandler ();

		// Ƶ��
		void SetChannel (const EventChannel &channel);
		const EventChannel &GetChannel () const;
		void MergeChannel (const EventChannel &channel);
		void DisMergeChannel (const EventChannel &channel);
		void ClearChannel ();
		bool IsListening (const EventChannel &channel);

		// ����
		EventWorld* GetWorld ();
		bool IsInWorld () const;
		bool IsInWorld (EventWorld* pWorld) const;

		// ����,������Ӧ����Ϣ����
		virtual void DoEnter ();
		virtual void DoExecute (Event *event);
		virtual void DoLeave ();
		
public_internal:
		void Execute (Event* event);
		void Enter (EventWorld* world);
		void Leave ();

	private:
		bool mEntered;
		bool mEnableUpdate;
		EventWorld* mWorld;
		EventChannel mChannel;
	};

}

#endif
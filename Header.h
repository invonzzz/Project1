#pragma once

using namespace System;
using namespace System::Windows::Forms;
using namespace System::IO;

int cDay = 1;
int Month = 4;

ref class Task
{
public:
	String^ name;
	String^ data;
	bool end;
	bool late;
	Task()
	{
		name = gcnew String("");;
		data = gcnew String("");;
		end = 0;
		late = 0;
	}
	Task(String^ name, String^ data, bool end, bool late)
	{
		this->name = gcnew String(name);
		this->data = gcnew String(data);
		this->end = end;
		this->late = late;
	}
	void SetReady()
	{
		this->end = 0;
	}
	void CheckLate()
	{
		String^ day = "" + this->data[0] + this->data[1];
		String^ month = "" + this->data[3] + this->data[4];
		if (Convert::ToInt32(month) > Month) this->late = 1;
		if (this->late == 0)
		{
			if (Convert::ToInt32(day) > cDay) this->late = 1;
		}
	}
	void setname(String^ name)
	{
		this->name = gcnew String(name);
	}
	void setdata(String^ data)
	{
		this->data = gcnew String(data);
	}
	void setend(bool end)
	{
		this->end = end;
	}
	void setlate(bool late)
	{
		this->late = late;
	}
	String^ getname()
	{
		return this->name;
	}
	String^ getdata()
	{
		return this->data;
	}
	bool getend()
	{
		return this->end;
	}

	bool getlate()
	{
		return this->late;
	}
};
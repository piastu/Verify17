#pragma once

#include "classes.h"
#include "train.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

namespace Rails {

	public ref class station {
	private:
		String^ name; // �������� �������
		int x, y; // ���������� �������
		int specials; // ���������� ����������, ��������� ���. ������������
		int denied; // ���������� ����������, ������� ���� �������� � ������� ������
		List<train^>^ trains; // ��������� � ������� � �������, �������������� �� �������
	public:
		station(String^ name, int x, int y);
		station(station% instance);

		virtual String^ get_name(); // ���������� �������� �������
		virtual int get_x(); // ���������� ���������� X �������
		virtual int get_y(); // ���������� ���������� Y �������
		virtual List<train^>^ get_trains(); // ���������� ��������� � ������� � �������
		virtual int get_denied(); // ���������� ���������� ����������, ������� ���� �������� � ������� ������
		virtual int get_specials(); // ���������� ���������� ����������, ��������� ���. ������������

		virtual void set_name(String^ name); // ������������� �������� �������
		virtual void set_x(int value); // ������������� ���������� X �������
		virtual void set_y(int value); // ������������� ���������� Y �������
		virtual void set_trains(List<train^>^ value); // ������������� ��������� � ������� � �������
		virtual void set_denied(int value); // ������������� ���������� ����������, ������� ���� �������� � ������� ������
		virtual void set_specials(int value); // ������������� ���������� ����������, ��������� ���. ������������
	};

}
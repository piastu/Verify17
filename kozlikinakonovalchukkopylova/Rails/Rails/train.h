#pragma once

#include "classes.h"
#include "carriage.h"
#include "station.h"

using namespace System;
using namespace System::Collections;
using namespace System::Collections::Generic;

namespace Rails {

	// ����� ������
	public ref class train {
	private:
		int number; // ����� ������

		List<carriage_base^>^ carriages; // ��������� � ������� � �������

		station^ station_dispatch; // ������� �����������
		station^ station_arrival; // ������� ��������

		int time_dispatch; // ����� ����������� (� �������, ������ �� ��������)
		int time_arrival; // ����� �������� (� �������, ������ �� ��������)

	public:
		train(int number, station^ dispatch, station^ arrival);
		train(train% instance);

		virtual int get_number(); // ���������� ����� ������
		virtual List<carriage_base^>^ get_carriages(); // ���������� ��������� � ������� � �������
		virtual station^ get_stantion_dispatch(); // ���������� ������� �����������
		virtual station^ get_stantion_arrival(); // ���������� ������� ��������
		virtual int get_time_dispatch(); // ���������� ����� �����������
		virtual int get_time_arrival(); // ���������� ����� ��������

		virtual int get_cost(int price); // ���������� ��������� ������� (����� ���� * ����)
		virtual int get_distance(); // ���������� ����� ����

		virtual void set_number(int value); // ������������� ����� ������
		virtual void set_carriages(List<carriage_base^>^ value); // ������������� ��������� � ������� � �������
		virtual void set_stantion_dispatch(station^ value); // ������������� ������� �����������
		virtual void set_stantion_arrival(station^ value); // ������������� ������� ��������
		virtual void set_time_dispatch(int value); // ������������� ����� �����������
		virtual void set_time_arrival(int value); // ������������� ����� ��������
	};

}
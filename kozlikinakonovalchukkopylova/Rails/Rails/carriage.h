#pragma once

#include "classes.h"

namespace Rails {

	// ������������ ����� �������
	public enum class carriage_type : int {
		SEAT, // �������
		RESERVED, // ��������
		COUPE, // ����
		POSTAL, // ��������
		CAFE, // �����
		RESTARAUNT // ��������
	};

	// ������� ����� ������
	public ref class carriage_base {
	private:
		carriage_type type; // ��� ������
		int number; // ����� ������

	public:
		carriage_base(int number);
		carriage_base(carriage_base% instance);

		virtual int  get_number(); // ���������� ����� ������
		virtual carriage_type get_type(); // ���������� ��� ������
		virtual void set_number(int value); // ������������� ����� ������
		virtual void set_type(carriage_type value); // ������������� ��� ������
	};

	// ����� ������������� ������
	public ref class passenger_carriage : public carriage_base {
	private:
		int places; // ���������� ����
		int buyed; // ���������� ��������� ����
		int price; // ���� �� �����
		bool television; // ���� �� ���������
		bool telephony; // ���� �� ���������� �����

	public:
		passenger_carriage(int number, int places, int price);
		passenger_carriage(passenger_carriage% instance);

		virtual int get_places(); // ���������� ���������� ����
		virtual int get_buyed(); // ���������� ���������� ��������� ����
		virtual int get_price(); // ���������� ���� ������
		virtual int get_has_television(); // ���������� ���� �� ���������
		virtual int get_has_telephony(); // ���������� ���� �� ���������� �����

		virtual void set_places(int value); // ������������� ���������� ����
		virtual void set_buyed(int value); // ������������� ���������� ��������� ����
		virtual void set_price(int value); // ������������� ���� ������
		virtual void set_has_television(bool value); // ������������� ���� �� ���������
		virtual void set_has_telephony(bool value);  // ������������� ���� �� ���������� �����
	};

	// ����� �������� ������
	public ref class seat_carriage : public passenger_carriage {
	public:
		seat_carriage(int number);
		seat_carriage(seat_carriage% instance);
	};

	// ����� ������������ ������
	public ref class reserved_carriage : public passenger_carriage {
	public:
		reserved_carriage(int number);
		reserved_carriage(reserved_carriage% instance);
	};

	// ����� ��������� ������
	public ref class coupe_carriage : public passenger_carriage {
	public:
		coupe_carriage(int number);
		coupe_carriage(coupe_carriage% instance);
	};

	// ����� ���������� ������
	public ref class service_carriage : public carriage_base {
	public:
		service_carriage(int number);
		service_carriage(service_carriage% instance);
	};

	// ����� ��������� ������
	public ref class postal_carriage : public service_carriage {
	public:
		postal_carriage(int number);
		postal_carriage(postal_carriage% instance);
	};

	// ����� ������-������
	public ref class cafe_carriage : public service_carriage {
	public:
		cafe_carriage(int number);
		cafe_carriage(cafe_carriage% instance);
	};

	// ����� ������-���������
	public ref class restaraunt_carriage : public service_carriage {
	public:
		restaraunt_carriage(int number);
		restaraunt_carriage(restaraunt_carriage% instance);
	};

}
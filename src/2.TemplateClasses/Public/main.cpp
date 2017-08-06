#include <iostream>
#include <list>

#include <Amount.h>
#include <Complex.h>

class AmountList {
public:
	friend auto operator<<(std::ostream& os, const AmountList& amountList) -> std::ostream&;

	AmountList() : m_first(nullptr), m_last(nullptr), m_size(0) { }
	AmountList(const AmountList& other) { }
	~AmountList() { this->Clear(); }

	auto InsertFront(Amount* amount) -> AmountList& {
		// Implement this method

		return *this;
	}

	auto InsertBack(Amount* amount) -> AmountList& {
		// Implement this method

		return *this;
	}

	auto RemoveFront() -> Amount* {
		// Implement this method

		return nullptr;
	}

	auto RemoveBack() -> Amount* {
		// Implement this method

		return nullptr;
	}

	auto Clear() -> AmountList& {
		// Implement this method

		return *this;
	}

	auto Size() const -> size_t {
		return m_size;
	}

	auto Get(const size_t index) -> Amount* {
		if (index >= m_size) throw "Out of bounds";
		return this->GetNode(index)->amount;
	}

private:
	struct Node {
		Node(Amount* amount, Node* next) : amount(amount), next(next) { }

		Amount* amount;
		Node* next;
	};

	auto GetNode(const size_t index) -> Node* {
		Node* node = m_first;
		for (size_t i = 0; i < index; ++i) 
			node = node->next;
		
		return node;
	}

	Node* m_first;
	Node* m_last;
	size_t m_size;
};

auto operator<<(std::ostream& os, const AmountList& amountList) -> std::ostream& {
	AmountList::Node* node = amountList.m_first;
	for (size_t i = 0; i < amountList.Size(); ++i) {
		os << *(node->amount) << std::endl;
		node = node->next;
	}

	return os;
}

/************************************************************************************************************************/

// OMG SO MUCH COPY-PASTA
class ComplexList {
public:
	friend auto operator<<(std::ostream& os, const ComplexList& amountList)->std::ostream&;

	ComplexList() : m_first(nullptr), m_last(nullptr), m_size(0) { }
	ComplexList(const ComplexList& other) { }
	~ComplexList() { this->Clear();  }

	auto InsertFront(Complex* data) -> ComplexList& {
		// Implement this method

		return *this;
	}

	auto InsertBack(Complex* data) -> ComplexList& {
		// Implement this method

		return *this;
	}

	auto RemoveFront() -> Complex* {
		// Implement this method

		return nullptr;
	}

	auto RemoveBack() -> Complex* {
		// Implement this method

		return nullptr;
	}

	auto Clear() -> ComplexList& {
		// Implement this method

		return *this;
	}

	auto Size() const -> size_t {
		return m_size;
	}

	auto Get(const size_t index) -> Complex* {
		if (index >= m_size) throw "Out of bounds";
		return this->GetNode(index)->data;
	}

private:
	struct Node {
		Node(Complex* data, Node* next) : data(data), next(next) { }

		Complex* data;
		Node* next;
	};

	auto GetNode(const size_t index) -> Node* {
		Node* node = m_first;
		for (size_t i = 0; i < index; ++i)
			node = node->next;

		return node;
	}

	Node* m_first;
	Node* m_last;
	size_t m_size;
};

auto operator<<(std::ostream& os, const ComplexList& complexList) -> std::ostream& {
	ComplexList::Node* node = complexList.m_first;
	for (size_t i = 0; i < complexList.Size(); ++i) {
		os << *(node->data) << std::endl;
		node = node->next;
	}

	return os;
}

/************************************************************************************************************************/

auto main() -> int {

	Amount electricityBill(15, 90);
	Amount gasBill(20, 30);
	Amount phoneBill(10, 25);
	
	// Uncomment the part below after you have implemented AmountList

	//AmountList bills;
	//bills.InsertBack(&electricityBill).InsertBack(&gasBill).InsertFront(&phoneBill);

	//std::cout << "I have the following expenses (generated from AmountList):" << std::endl;
	//std::cout << bills << std::endl << std::endl;

	/************************************************************************************************************************/

	Complex somethingComplex(2.0, 0.0);
	Complex anotherComplexThing(3.0, 24.0);

	// Uncomment the part below after you have implemented ComplexList

	//ComplexList data;
	//data.InsertFront(&somethingComplex).InsertBack(&anotherComplexThing);

	//std::cout << "I have the following data (generated from ComplexList):" << std::endl;
	//std::cout << data << std::endl << std::endl;

	return 0;
}
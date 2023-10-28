#pragma once

namespace crossfitbuddyWF {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// Podsumowanie informacji o MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: W tym miejscu dodaj kod konstruktora
			//
		}

	protected:
		/// <summary>
		/// Wyczyœæ wszystkie u¿ywane zasoby.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBoxTyp;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ProgressBar^ progressBar1;

	private: System::Windows::Forms::Label^ label4;






	private: System::Windows::Forms::ErrorProvider^ errorProvider1;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;


	private: System::Windows::Forms::TreeView^ treeView1;




	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// Wymagana zmienna projektanta.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Metoda wymagana do obs³ugi projektanta — nie nale¿y modyfikowaæ
		/// jej zawartoœci w edytorze kodu.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->comboBoxTyp = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->errorProvider1 = (gcnew System::Windows::Forms::ErrorProvider(this->components));
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->treeView1 = (gcnew System::Windows::Forms::TreeView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBoxTyp
			// 
			this->comboBoxTyp->FormattingEnabled = true;
			this->comboBoxTyp->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Crossfit", L"Trening Si³owy", L"Trening Wytrzyma³oœciowy" });
			this->comboBoxTyp->Location = System::Drawing::Point(74, 94);
			this->comboBoxTyp->Name = L"comboBoxTyp";
			this->comboBoxTyp->Size = System::Drawing::Size(121, 24);
			this->comboBoxTyp->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(238, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(117, 16);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Generator treningu";
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(292, 94);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(120, 22);
			this->numericUpDown1->TabIndex = 2;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(241, 157);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(353, 20);
			this->checkBox1->TabIndex = 3;
			this->checkBox1->Text = L"Zaznaczyæ je¿eli trening ma byæ wygenerowany w pliku";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(77, 157);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Generuj";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(71, 75);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(81, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"Typ treningu";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(302, 74);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(172, 16);
			this->label3->TabIndex = 6;
			this->label3->Text = L"iloœæ dni do wygenerowania";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 449);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(257, 23);
			this->progressBar1->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 209);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(41, 16);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Dzieñ";
			// 
			// errorProvider1
			// 
			this->errorProvider1->ContainerControl = this;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(370, 352);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(104, 16);
			this->label11->TabIndex = 16;
			this->label11->Text = L"Mi³ego treningu!";
			this->label11->Visible = false;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(238)));
			this->label12->Location = System::Drawing::Point(258, 292);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(336, 32);
			this->label12->TabIndex = 17;
			this->label12->Text = L"Trening wygenerowany!";
			this->label12->Visible = false;
			// 
			// treeView1
			// 
			this->treeView1->Location = System::Drawing::Point(33, 243);
			this->treeView1->Name = L"treeView1";
			this->treeView1->Size = System::Drawing::Size(177, 171);
			this->treeView1->TabIndex = 20;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(620, 484);
			this->Controls->Add(this->treeView1);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->numericUpDown1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->comboBoxTyp);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->errorProvider1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
// Funkcja odpowiedzialna za przetrzymywanie arrayów, u¿ywana zamiast definiowania arrayow globalnie
array<String^>^ Inicjalizuj(int index) {
	array<String^>^ podnoszenieciezarow;
	array<String^>^ kondycja;
	array<String^>^ gimnastykaA;
	array<String^>^ kettlebell;
	array<String^>^ gimnastykaB;
	
	podnoszenieciezarow = gcnew array<String^> { "Martwy ci¹g", "Clean", "Wyciskanie ¿o³nierskie", "Wyciskanie" };
	kondycja = gcnew array<String^> {"Bieganie", "Sprint", "Skakanka", "Wios³owanie"};
	gimnastykaA = gcnew array<String^> {"Dipy", "Burpees", "Back Extension", "Brzuszki"};
	kettlebell = gcnew array<String^> {"Swing", "Spacer farmera", "Rzuty pi³k¹", "Snatch"};
	gimnastykaB = gcnew array<String^> {"Podci¹gniêcia", "Pompki", "Wspinaczka na linie", "Deska"};
	
	switch (index)
	{
	case 0:
		return podnoszenieciezarow;
		break;
	case 1:
		return kondycja;
		break;
	case 2:
		return gimnastykaA;
		break;
	case 3:
		return kettlebell;
		break;
	case 4:
		return gimnastykaB;
		break;
	default:
		
		break;
	}
}
// funkcja sprawdzaj¹ca blêdy
bool Blad(NumericUpDown^ UP, ComboBox^ CB) {
	
	if (int::Parse(UP->Text) == 0) {
		errorProvider1->SetError(UP, "Podaj prawid³ow¹ liczbe");
		return false;
	}
	if (CB->SelectedIndex == -1) {
		errorProvider1->SetError(CB, "Wybierz typ æwiczeñ");
		return false;
	}
	return true;
}

//funkcja generuj¹ca trening
void GenerujCrossfit() {
	String^ filename = "trening.txt"; // definiowanie zmiennych 
	StreamWriter^ sw = gcnew StreamWriter(filename);
	
	array<array<String^>^>^ cwiczenia = gcnew array<array<String^>^>(5);
	for (int y = 0; y < 5; y++) {
		cwiczenia[y] = gcnew array<String^>(5);
		cwiczenia[y] = Inicjalizuj(y);
	}
	
	treeView1->Nodes->Clear(); //czyszczenie wyswietlania
	progressBar1->Value = 0;
	
	int temp; //glowna logika programu
	for (int c = 0; c<int::Parse(numericUpDown1->Text); c++) {
		progressBar1->Maximum = int::Parse(numericUpDown1->Text); //logika ladowania
		treeView1->Nodes->Add("Dzieñ " + (c+1).ToString()); 
		if (checkBox1->Checked == true) sw->WriteLine("Dzieñ " + (c+1).ToString());
		for (int i = 0; i < 5; i++) {
			Random^ rand = gcnew Random(); // generator liczb pseudo losowych (tworzenie nowego seedu)
			temp = rand->Next(0, (3 + 1));
			treeView1->Nodes[c]->Nodes->Add(cwiczenia[i][temp]);
			if (checkBox1->Checked == true) sw->WriteLine(cwiczenia[i][temp]);

			
		}
		progressBar1->PerformStep(); //wykonaj ladowanie paska
	}
	label12->Visible = true; //pokaz wiadomosc pozegnalna
	label11->Visible = true;
	sw->Close(); //zamknij plik
}
	
void GenerujTreningsilowy() {
	String^ filename = "trening.txt";
	StreamWriter^ sw = gcnew StreamWriter(filename);

	array<array<String^>^>^ cwiczenia = gcnew array<array<String^>^>(5);
	for (int y = 0; y < 5; y++) {
		cwiczenia[y] = gcnew array<String^>(5);
	}
	cwiczenia[0] = Inicjalizuj(0);
	cwiczenia[1] = Inicjalizuj(3);
	cwiczenia[2] = Inicjalizuj(0);
	cwiczenia[3] = Inicjalizuj(0);
	cwiczenia[4] = Inicjalizuj(2);

	treeView1->Nodes->Clear();
	progressBar1->Value = 0;

	int temp;
	for (int c = 0; c<int::Parse(numericUpDown1->Text); c++) {
		progressBar1->Maximum = int::Parse(numericUpDown1->Text);
		treeView1->Nodes->Add("Dzieñ " + (c + 1).ToString());
		if (checkBox1->Checked == true) sw->WriteLine("Dzieñ " + (c + 1).ToString());
		for (int i = 0; i < 5; i++) {
			Random^ rand = gcnew Random();
			temp = rand->Next(0, (3 + 1));
			treeView1->Nodes[c]->Nodes->Add(cwiczenia[i][temp]);
			if (checkBox1->Checked == true) sw->WriteLine(cwiczenia[i][temp]);


		}
		progressBar1->PerformStep();
	}
	label12->Visible = true;
	label11->Visible = true;
	sw->Close();
}

void GenerujTreningwytrzymalosciowy() {
	String^ filename = "trening.txt";
	StreamWriter^ sw = gcnew StreamWriter(filename);

	array<array<String^>^>^ cwiczenia = gcnew array<array<String^>^>(5);
	for (int y = 0; y < 5; y++) {
		cwiczenia[y] = gcnew array<String^>(5);
	}
	cwiczenia[0] = Inicjalizuj(1);
	cwiczenia[1] = Inicjalizuj(1);
	cwiczenia[2] = Inicjalizuj(2);
	cwiczenia[3] = Inicjalizuj(3);
	cwiczenia[4] = Inicjalizuj(2);

	treeView1->Nodes->Clear();
	progressBar1->Value = 0;

	int temp;
	for (int c = 0; c<int::Parse(numericUpDown1->Text); c++) {
		progressBar1->Maximum = int::Parse(numericUpDown1->Text);
		treeView1->Nodes->Add("Dzieñ " + (c + 1).ToString());
		if (checkBox1->Checked == true) sw->WriteLine("Dzieñ " + (c + 1).ToString());
		for (int i = 0; i < 5; i++) {
			Random^ rand = gcnew Random();
			temp = rand->Next(0, (3 + 1));
			treeView1->Nodes[c]->Nodes->Add(cwiczenia[i][temp]);
			if (checkBox1->Checked == true) sw->WriteLine(cwiczenia[i][temp]);


		}
		progressBar1->PerformStep();
	}
	label12->Visible = true;
	label11->Visible = true;
	sw->Close();
}

private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	errorProvider1->Clear(); // wyczysc blad
	if (Blad(numericUpDown1, comboBoxTyp) == true && comboBoxTyp->SelectedIndex == 0) GenerujCrossfit();
	else if (Blad(numericUpDown1, comboBoxTyp) == true && comboBoxTyp->SelectedIndex == 1) GenerujTreningsilowy();
	else if (Blad(numericUpDown1, comboBoxTyp) == true && comboBoxTyp->SelectedIndex == 2) GenerujTreningwytrzymalosciowy();
	
}
};
}

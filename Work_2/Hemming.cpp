

#include "stdafx.h"
#include "Form1.h"

const char m=64;	// длина слова 
const char k=7;	    
const char n=m+k+1;	

unsigned char lenc; //длина пакета в байтах

unsigned char matr[n * (k+1)]={								
									0,0,0,0,0,1,1, 1,		// 7 - 1
                                    0,0,0,0,1,0,1, 1,		// 11 - 2
                                    0,0,0,0,1,1,0, 1,		// 13 - 3
                                    0,0,0,0,1,1,1, 0,		// 14 - 4
                                    0,0,0,1,0,0,1, 1,		// 19 - 5
                                    0,0,0,1,0,1,0, 1,		// 21 - 6
                                    0,0,0,1,0,1,1, 0,		// 22 - 7
                                    0,0,0,1,1,0,0, 1,		// 25 - 8
                                    0,0,0,1,1,0,1, 0,		// 26 - 9
                                    0,0,0,1,1,1,0, 0,		// 28 - 10
                                    0,0,0,1,1,1,1, 1,		// 31 - 11
                                    0,0,1,0,0,0,1, 1,		// 35 - 12
                                    0,0,1,0,0,1,0, 1,		// 37 - 13
                                    0,0,1,0,0,1,1, 0,		// 38 - 14
                                    0,0,1,0,1,0,0, 1,		// 41 - 15
                                    0,0,1,0,1,0,1, 0,		// 42 - 16
                                    0,0,1,0,1,1,0, 0,		// 44 - 17
                                    0,0,1,0,1,1,1, 1,		// 47 - 18
                                    0,0,1,1,0,0,0, 1,		// 49 - 19
                                    0,0,1,1,0,0,1, 0,		// 50 - 20
                                    0,0,1,1,0,1,0, 0,		// 52 - 21
                                    0,0,1,1,0,1,1, 1,		// 55 - 22
                                    0,0,1,1,1,0,0, 0,		// 56 - 23
                                    0,0,1,1,1,0,1, 1,		// 59 - 24
                                    0,0,1,1,1,1,0, 1,		// 61 - 25
                                    0,0,1,1,1,1,1, 0,		// 62 - 26
                                    0,1,0,0,0,0,1, 1,		// 67 - 27
                                    0,1,0,0,0,1,0, 1,		// 69 - 28
                                    0,1,0,0,0,1,1, 0,		// 70 - 29
                                    0,1,0,0,1,0,0, 1,		// 73 - 30
                                    0,1,0,0,1,0,1, 0,		// 74 - 31
                                    0,1,0,0,1,1,0, 0,		// 76 - 32
                                    0,1,0,0,1,1,1, 1,		// 79 - 33
                                    0,1,0,1,0,0,0, 1,		// 81 - 34
                                    0,1,0,1,0,0,1, 0,		// 82 - 35
                                    0,1,0,1,0,1,0, 0,		// 84 - 36
                                    0,1,0,1,0,1,1, 1,		// 87 - 37
                                    0,1,0,1,1,0,0, 0,		// 88 - 38
                                    0,1,0,1,1,0,1, 1,		// 91 - 39
                                    0,1,0,1,1,1,0, 1,		// 93 - 40
                                    0,1,0,1,1,1,1, 0,		// 94 - 41
                                    0,1,1,0,0,0,0, 1,		// 97 - 42
                                    0,1,1,0,0,0,1, 0,		// 98 - 43
                                    0,1,1,0,0,1,0, 0,		// 100 - 44
                                    0,1,1,0,0,1,1, 1,		// 103 - 45
                                    0,1,1,0,1,0,0, 0,		// 104 - 46
                                    0,1,1,0,1,0,1, 1,		// 107 - 47
                                    0,1,1,0,1,1,0, 1,		// 109 - 48
                                    0,1,1,0,1,1,1, 0,		// 110 - 49
                                    0,1,1,1,0,0,0, 0,		// 112 - 50
                                    0,1,1,1,0,0,1, 1,		// 115 - 51
                                    0,1,1,1,0,1,0, 1,		// 117 - 52
                                    0,1,1,1,0,1,1, 0,		// 118 - 53
                                    0,1,1,1,1,0,0, 1,		// 121 - 54
                                    0,1,1,1,1,0,1, 0,		// 122 - 55
                                    0,1,1,1,1,1,0, 0,		// 124 - 56
                                    0,1,1,1,1,1,1, 1,		// 127 - 57
                                    1,0,0,0,0,0,1, 1,		// 131 - 58
                                    1,0,0,0,0,1,0, 1,		// 133 - 59
                                    1,0,0,0,0,1,1, 0,		// 134 - 60
                                    1,0,0,0,1,0,0, 1,		// 137 - 61
                                    1,0,0,0,1,0,1, 0,		// 138 - 62
                                    1,0,0,0,1,1,0, 0,		// 140 - 63
                                    1,0,0,0,1,1,1, 1,		// 143 - 64

									1,0,0,0,0,0,0, 0,	
									0,1,0,0,0,0,0, 0,
									0,0,1,0,0,0,0, 0,
									0,0,0,1,0,0,0, 0,
									0,0,0,0,1,0,0, 0,
									0,0,0,0,0,1,0, 0,
									0,0,0,0,0,0,1, 0,

									0,0,0,0,0,0,0, 1	
				};


using namespace Work_2;


[STAThreadAttribute] // для взаимодействия с компонентами windows (пр. буфер обмена)

// main функция, создание окна программы
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());
	return 0;
}



unsigned char Get_Rank_bySndr(unsigned char sndr) //детектирование ошибок
{
	unsigned char SR[144]={	
		255,												//ошибок нет! 
		72,
		71,
		0,70,
		0,0,1,69,		//8
		0,0,2,0,3,4,0,68,			//16
		0,0,5,0,6,7,0,0,8,9,0,10,0,0,11,67,				//32
		0,0,12,0,13,14,0,0,15,16,0,17,0,0,18,0,19,20,0,21,0,0,22,23,0,0,24,0,25,26,0,66,	 //64
		0,0,27,0,28,29,0,0,30,31,0,32,0,0,33,0,34,35,0,36,0,0,37,38,0,0,39,0,40,41,			 //94
		0,0,42,43,0,44,0,0,45,46,0,0,47,0,48,49,0,50,0,0,51,0,52,53,0,0,54,55,0,56,0,0,57,65,//128
		0,0,58,0,59,60,0,0,61,62,0,63,0,0,64												 //143
	};
	if(sndr>143)sndr=3;

	return SR[sndr];	
}


System::String ^WriteByBits(unsigned char c) 
{	 
	System::String ^res = ""; //инициализация переменной типа String
 		
	for (int i = 0; i < 8; i++)
	{
		unsigned char h=c&0x80; // с (байт пакета) "побитовое и" 0x80 = 10000000 (2-ичная система счисления) 
		if(h) res+="1"; // 1
		else res+="0"; // 0
		c <<= 1; //присваивание с побитовым сдвигом влево
	} 
    return res;
}

// функция перевода при инвертировании в ручную
unsigned char BitStringToByte(System::String ^str)
{
	unsigned char res=0;

	for (int b = 0; b < 8; b++)
	{
		res <<= 1; //присваивание с побитовым сдвигом влево
		if(str[b]=='1')	res+= 1; 
	}
	return res;
}

// функция кодировки слова
void EncodeWord(unsigned char *pBlock)
{	
	unsigned char c=0, cb=0, M, j=0, *pBlock0=pBlock; //cb - контрольный байт(8 бит)

	for (int i = 0; i < (k+1); i++) // i - номер пакета
	{
		j = 0;
		M = 0x80 >> i;	//Все биты 0х80 смещаются вправо на i бит	//чтобы имитировать с какой колонкой матрицы мы работаем
		pBlock=pBlock0; 
		while (j < n)	// перебираем все биты пакета от 0 до 71
		{
			c = *pBlock++;	//переход к следующему байту пакета 
	        
			for (int b = 0; b < 8; b++) // перебор каждого бита в байте
			{ 
				unsigned char h=c&0x80;			// текущий байт умножаем на 10000000, результат будет значение самого старшего бита
				if(h && matr[j*(k+1)+i]) cb^=M;	 //Если старший бит = 1 и этот элемент матрицы = 1, то инвертируем 
				//cb  - проверка на четность , инвертирование единственного бита в контрольном байте
				j++; //новый бит в пакете			
				c <<= 1; //присваивание с побитовым сдвигом влево (старшим битов становится новый бит через итерацию)
			}
		}

		if(i==k-1)
	*(pBlock0+8)=cb;		
	}
	//сb контрольный байт сформирован
	*(pBlock0+8)=cb; //запись в память (в массив byt)
}

//функция для вывода кодированных пакетов
System::String ^WriteCode(unsigned char *pBlock, unsigned int couWord)
{	
	System::String ^res = "";
	unsigned char c,len;	
 
	for (unsigned int cou=0;cou<couWord;cou++)
	{
		len = lenc; 		
		while (len--)
		{
			c = *pBlock++;
			//res+=WriteByBits(c);
			res+=WriteByBits(c)+"  ";	//байты разделяю двумя пробелами	
		}
		res+="    Пакет "+System::Convert::ToString(cou+1)+"\n";
	}
    return res;
}

//функция для вывода декодированных пакетов   
System::String ^WriteDecode(unsigned char *pBlock, unsigned int couWord)
{	
	System::String ^res = "";
	unsigned char c,len;	
 
	for (unsigned int cou=0;cou<couWord;cou++){
		len = lenc-1; 		
		while (len--)
		{
			c = *pBlock++;
			res+=WriteByBits(c);		
		}
		pBlock++;
		res+="    Пакет "+System::Convert::ToString(cou+1)+"\n";	
	}
    return res;
}

//вывод окна выбора файлов
Void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e) 
{
	lenc = n >> 3 ; // n = 72 // сдвиг на 3 вправо = деление на 2^3   // в пакете 9 байт

	openFileDialog1->InitialDirectory = System::Windows::Forms::Application::StartupPath;
	openFileDialog1->Filter = "txt files (*.txt)|*.txt|All files (*.*)|*.*";
    openFileDialog1->FilterIndex = 1;
	openFileDialog1->RestoreDirectory = true;
	openFileDialog1->FileName="test.txt";

	saveFileDialog1->InitialDirectory = openFileDialog1->InitialDirectory;
    saveFileDialog1->Filter = openFileDialog1->Filter;
    saveFileDialog1->FilterIndex = 1;
    saveFileDialog1->RestoreDirectory = true;
	saveFileDialog1->FileName=openFileDialog1->FileName+".hm";	
}


//кнопка загрузить файл
Void Form1::button0_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	System::String ^oneLine;
	StreamReader^ sr;
	textBox0->Text="";	

	if (this->openFileDialog1->ShowDialog()==::DialogResult::OK) 
	{	
			label0->Text="Путь:  "+openFileDialog1->FileName;
				
			sr = gcnew StreamReader(openFileDialog1->FileName);
			try
			{						
				while ( sr->Peek() >= 0 )
				{
					oneLine = sr->ReadLine();
					textBox0->Text+=oneLine+"\r\n";	
				}
					
			} 
			catch(int)				
			{
				MessageBox::Show( "Этот файл - не загружается...","Сообщение об ошибке" );	
			}
			finally
			{
				delete sr;  
			}					
	}		
}

//кнопка кодировать
Void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	if(textBox0->Text!="")
	{
		etcod=EncodeHemming(textBox0->Text);		
		richTextBox1->Text=etcod;	
		ettxt=WriteDecode(byt,couWord);//открытый код без ошибок (меняться не будет)
		eterr=ettxt;//строку пустой оставлять нельзя, но сюда возможно введут ошибки

	}
	else 
	{	
		MessageBox::Show( "Отсутствует строка для кодирования",	"Внимание", 
		System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
	}
	
}

//Функция для удаления разделяющих два пробела между байтами (чтобы не мешали декодированию)
System::String ^Delete2space(System::String ^str) 
{	
	System::String ^res = "";
 
	array<System::String^> ^split = str->Split('\n');
	for(int i=0;i<split->Length;i++)
	{	
		System::String ^tmp = split[i];
		if(tmp->Length > lenc*10) //10 - это 8 бит-символов и 2 пробела после байта
		{
			for(int j=lenc;j>0;j--)
			{
				tmp=tmp->Remove((j-1)*10+8,2);	
			}
			res+=tmp+"\r\n";
		}
	}
	res+="\r\n";
    return res;
}

//кнопка сохранить изменения
Void Form1::button1save_Click(System::Object^  sender, System::EventArgs^  e) 
{ 
	System::String ^tmp=Delete2space(richTextBox1->Text);
	BitStringToArray(tmp);
	eterr = WriteDecode(byt,couWord); //в этой сохраняем с ошибками
	
	for(int i=0;i<richTextBox1->Text->Length;i++)
	{
		richTextBox1->Select(i,1);
		if(richTextBox1->Text[i]!=etcod[i]) //изменен бит
				richTextBox1->SelectionColor = System::Drawing::Color::Red;	
		else	richTextBox1->SelectionColor = System::Drawing::Color::Black;
	}
	richTextBox1->SelectionLength=0;
}

//кнопка проверить и исправить
Void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e) 
{  
	if(richTextBox1->Text!="")
	{
		textBox2->Text="";
		Check(couWord);
	}
	else 
	{	
		MessageBox::Show( "Отсутствует строка кода",	"Внимание", 
		System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
	}
}

//вставить по два пробела между байтами (разделение для красоты)
Void InsertSpace2(System::Windows::Forms::RichTextBox ^rtb) 
{	 
	int cou8=0;
	for(int i=rtb->Text->Length-1;i>1;i--)
	{	//перебор по символам с конца
		unsigned short c=rtb->Text[i];
		if(rtb->Text[i]==48 || rtb->Text[i]==49) //если символ "0" или "1"
			cou8++;
		else cou8=0;
		if(cou8>7)
		{
			wchar_t ch=rtb->Text[i-1];
			short a=System::Convert::ToInt16(rtb->Text[i-1]);
			if(a==48 || a==49)
			{
				rtb->Text=(rtb->Text)->Insert(i,"  ");	
				cou8=0;
			}
		}
	}
}

//кнопка декодировать
Void Form1::button3_Click(System::Object^  sender, System::EventArgs^  e) 
{ 
	int sme=0;
	if(richTextBox1->Text!="")
	{
		richTextBox3->Text=WriteDecode(byt,couWord); //вызов функции WriteCode для декодирования
		InsertSpace2(richTextBox3); //разделяет на байты, добавляя проблеы

		for(int i=0;i<richTextBox3->Text->Length;i++) //заполнение с указанием на исправленную ошибку
		{
			if(richTextBox3->Text[i]==32 && richTextBox3->Text[i+1]==32 && (richTextBox3->Text[i+2]==48 || richTextBox3->Text[i+2]==49)) 
				//нашел 2 пробела между байтами
			{
				sme+=2; 
				i+=2;
			}
			richTextBox3->Select(i,1);
			if(richTextBox3->Text[i]!=eterr[i-sme] || richTextBox3->Text[i]!=ettxt[i-sme]) //изменен бит
				richTextBox3->SelectionColor = System::Drawing::Color::Red;			
			else	richTextBox3->SelectionColor = System::Drawing::Color::Black;		
		}
		richTextBox3->SelectionLength=0;
		
		textBox4->Text=WriteText();	
	}
	else 
	{	
		MessageBox::Show( "Отсутствует строка для декодирования",	"Внимание", 
		System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
	}
		
}

//для кодирования по Хэммингу
System::String ^ Form1::EncodeHemming(System::String ^str) //аргумент - исходное сообщение
{
	System::String ^res;  //для вывода резульата

	couWord=str->Length*16/m;					//количество пакетов
	if(str->Length*16 % m)
		couWord++;				

	bytSize = couWord * (lenc);      // размер массива для хранения пакетов
	CreateClearArray(bytSize);		//создание массива для хранения пакетов
					 
	for(int i=0, j=0;i<str->Length;i++,j+=2)  //j+=2 каждый символ по 2 байта
	{
		if(!((j+1) % (lenc)))j++;					
			*(wchar_t *)&byt[j]=str[i];		 //заполнение массива в бинарном виде
	}
								
	for(unsigned int i=0;i<couWord;i++)
		EncodeWord(&byt[(k+2)*i]);			//кодирование
					 
	res=WriteCode(byt,couWord);			//запись (вывод кода) по пакету в строке
									
	return res;
}

//чтобы пользователь мог менять отдельные биты
Void Form1::BitStringToArray(System::String ^str) //битовая строка преобразуется в сивольную строку
{	
	System::String ^ctrl;
	unsigned char c;								
	int j=0;
	couWord=0;
	
	array<System::String^> ^split = str->Split('\n');	// int ppp=split->Length;

	for(int i=0;i<split->Length;i++)
	{	
		if(split[i]->Length > n+4)
		{
			ctrl=split[i]->Substring(n+4,1);	//контрольный символ в пакете
			if(ctrl=="П") couWord++;
			else  
			{	
				MessageBox::Show( "Ошибка, не совпадает количество разрядов",	"Внимание", 
				System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
				return ;
			}
		
		}
	}
	bytSize=couWord * (lenc); 
	CreateClearArray(bytSize);	
			
	for(int a=0;a<split->Length;a++)
		if(split[a]->Length > n+4)
		{
			ctrl=split[a]->Substring(n+4,1);	//контрольный символ в пакете
			if(ctrl=="П") 
			{
				System::String ^ w = split[a];
				for(int i=0;i<lenc;i++)
				{
					System::String ^ b = w->Substring(i*8,8);
					c=BitStringToByte(b);
					byt[j*(k+2)+i]=c;			
				}
			    j++;
			}	
		}

}

//создание массива и заполнение нулями
Void Form1::CreateClearArray(int size)
{
	delete[] byt;
	byt=new unsigned char[size];
	for(int i=0;i<size;i++)byt[i]=0;
}

//вывод исходного текста
System::String ^ Form1::WriteText()
{
	System::String ^res;

		for(unsigned int j=0;j<bytSize-1;j+=2){
						if(!((j+1) % 9))j++;			//девятый байт (контрольный) пропускается
						res+=*(wchar_t *)&byt[j];
					}				
	return res;
}

// проверяет все пакеты на неискажение
Void Form1::Check(unsigned int couWord)
{ 
	pW=0;							
	for(unsigned int i=0;i<couWord;i++)
	{
			pW++;					
			CheckWord(&byt[(k+2)*i]); //вызов функции CheckWord для проверки на четность и отправка на анализ
	}
}

//
Void Form1::CheckWord(unsigned char *pBlock) //проверка единственного пакета
{		
	unsigned char j=0, c=0, M, *pBlock0=pBlock;
	Sndr=0;		//начальное обнуление синдрома

	for (int i = 0; i < k+1; i++)
	{
		j=0;			
		M=0x80 >> i;	
		pBlock=pBlock0;	
		
		while (j < n)		
		{
			c = *pBlock++;		
 
			for (int b = 0; b < 8; b++)
			{
				unsigned char h=c&0x80;
				if(h && matr[j*(k+1)+i]) Sndr^=M;	//накапливаю изменения в синдроме
				j++;			
				c <<= 1;
			}
		}
		//получаем байт синдромов
	}
	Analiz1(Sndr);
}


Void Form1::Analiz1(unsigned char Sndr) //анализ на двойную ошибку
{	
	System::String ^na="Слово "+System::Convert::ToString(pW)+": ";
		if(Sndr>143) na+="Двойная ошибка. Не корректируется.";
		else 
		{		
			pR=Get_Rank_bySndr(Sndr);
			if(pR==255) na+="Ошибок не обнаружено.";
			else if(pR==0) na+="Двойная ошибка. Не корректируется.";
				 else
				 {
						Invertor(pW,pR); //слово и номер бита
						na+="Ошибка в разряде "+System::Convert::ToString(pR)+". Исправлено.";
				 }
		}
	textBox2->Text+=na+"\r\n";
}

Void Form1::Invertor(unsigned int pW,unsigned char pR) // исправление ошибок
{
	pW--; pR--;	
	unsigned char pByt=pR>>3;		//целочисленное деление
	unsigned char pBit=pR & 0x07;	//остаток от деления
	unsigned char M=0x80>>pBit;	

	unsigned char c=byt[lenc*pW+pByt];
			
	c^=M;
	byt[lenc*pW+pByt]=c; 
}


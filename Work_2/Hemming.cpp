

#include "stdafx.h"
#include "Form1.h"

const char m=64;	// ����� ����� 
const char k=7;	    
const char n=m+k+1;	

unsigned char lenc; //����� ������ � ������

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


[STAThreadAttribute] // ��� �������������� � ������������ windows (��. ����� ������)

// main �������, �������� ���� ���������
int main(array<System::String ^> ^args)
{
	// ��������� ���������� �������� Windows XP �� �������� �����-���� ��������� ����������
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// �������� �������� ���� � ��� ������
	Application::Run(gcnew Form1());
	return 0;
}



unsigned char Get_Rank_bySndr(unsigned char sndr) //�������������� ������
{
	unsigned char SR[144]={	
		255,												//������ ���! 
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
	System::String ^res = ""; //������������� ���������� ���� String
 		
	for (int i = 0; i < 8; i++)
	{
		unsigned char h=c&0x80; // � (���� ������) "��������� �" 0x80 = 10000000 (2-����� ������� ���������) 
		if(h) res+="1"; // 1
		else res+="0"; // 0
		c <<= 1; //������������ � ��������� ������� �����
	} 
    return res;
}

// ������� �������� ��� �������������� � ������
unsigned char BitStringToByte(System::String ^str)
{
	unsigned char res=0;

	for (int b = 0; b < 8; b++)
	{
		res <<= 1; //������������ � ��������� ������� �����
		if(str[b]=='1')	res+= 1; 
	}
	return res;
}

// ������� ��������� �����
void EncodeWord(unsigned char *pBlock)
{	
	unsigned char c=0, cb=0, M, j=0, *pBlock0=pBlock; //cb - ����������� ����(8 ���)

	for (int i = 0; i < (k+1); i++) // i - ����� ������
	{
		j = 0;
		M = 0x80 >> i;	//��� ���� 0�80 ��������� ������ �� i ���	//����� ����������� � ����� �������� ������� �� ��������
		pBlock=pBlock0; 
		while (j < n)	// ���������� ��� ���� ������ �� 0 �� 71
		{
			c = *pBlock++;	//������� � ���������� ����� ������ 
	        
			for (int b = 0; b < 8; b++) // ������� ������� ���� � �����
			{ 
				unsigned char h=c&0x80;			// ������� ���� �������� �� 10000000, ��������� ����� �������� ������ �������� ����
				if(h && matr[j*(k+1)+i]) cb^=M;	 //���� ������� ��� = 1 � ���� ������� ������� = 1, �� ����������� 
				//cb  - �������� �� �������� , �������������� ������������� ���� � ����������� �����
				j++; //����� ��� � ������			
				c <<= 1; //������������ � ��������� ������� ����� (������� ����� ���������� ����� ��� ����� ��������)
			}
		}

		if(i==k-1)
	*(pBlock0+8)=cb;		
	}
	//�b ����������� ���� �����������
	*(pBlock0+8)=cb; //������ � ������ (� ������ byt)
}

//������� ��� ������ ������������ �������
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
			res+=WriteByBits(c)+"  ";	//����� �������� ����� ���������	
		}
		res+="    ����� "+System::Convert::ToString(cou+1)+"\n";
	}
    return res;
}

//������� ��� ������ �������������� �������   
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
		res+="    ����� "+System::Convert::ToString(cou+1)+"\n";	
	}
    return res;
}

//����� ���� ������ ������
Void Form1::Form1_Load(System::Object^  sender, System::EventArgs^  e) 
{
	lenc = n >> 3 ; // n = 72 // ����� �� 3 ������ = ������� �� 2^3   // � ������ 9 ����

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


//������ ��������� ����
Void Form1::button0_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	System::String ^oneLine;
	StreamReader^ sr;
	textBox0->Text="";	

	if (this->openFileDialog1->ShowDialog()==::DialogResult::OK) 
	{	
			label0->Text="����:  "+openFileDialog1->FileName;
				
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
				MessageBox::Show( "���� ���� - �� �����������...","��������� �� ������" );	
			}
			finally
			{
				delete sr;  
			}					
	}		
}

//������ ����������
Void Form1::button1_Click(System::Object^  sender, System::EventArgs^  e) 
{	
	if(textBox0->Text!="")
	{
		etcod=EncodeHemming(textBox0->Text);		
		richTextBox1->Text=etcod;	
		ettxt=WriteDecode(byt,couWord);//�������� ��� ��� ������ (�������� �� �����)
		eterr=ettxt;//������ ������ ��������� ������, �� ���� �������� ������ ������

	}
	else 
	{	
		MessageBox::Show( "����������� ������ ��� �����������",	"��������", 
		System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
	}
	
}

//������� ��� �������� ����������� ��� ������� ����� ������� (����� �� ������ �������������)
System::String ^Delete2space(System::String ^str) 
{	
	System::String ^res = "";
 
	array<System::String^> ^split = str->Split('\n');
	for(int i=0;i<split->Length;i++)
	{	
		System::String ^tmp = split[i];
		if(tmp->Length > lenc*10) //10 - ��� 8 ���-�������� � 2 ������� ����� �����
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

//������ ��������� ���������
Void Form1::button1save_Click(System::Object^  sender, System::EventArgs^  e) 
{ 
	System::String ^tmp=Delete2space(richTextBox1->Text);
	BitStringToArray(tmp);
	eterr = WriteDecode(byt,couWord); //� ���� ��������� � ��������
	
	for(int i=0;i<richTextBox1->Text->Length;i++)
	{
		richTextBox1->Select(i,1);
		if(richTextBox1->Text[i]!=etcod[i]) //������� ���
				richTextBox1->SelectionColor = System::Drawing::Color::Red;	
		else	richTextBox1->SelectionColor = System::Drawing::Color::Black;
	}
	richTextBox1->SelectionLength=0;
}

//������ ��������� � ���������
Void Form1::button2_Click(System::Object^  sender, System::EventArgs^  e) 
{  
	if(richTextBox1->Text!="")
	{
		textBox2->Text="";
		Check(couWord);
	}
	else 
	{	
		MessageBox::Show( "����������� ������ ����",	"��������", 
		System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
	}
}

//�������� �� ��� ������� ����� ������� (���������� ��� �������)
Void InsertSpace2(System::Windows::Forms::RichTextBox ^rtb) 
{	 
	int cou8=0;
	for(int i=rtb->Text->Length-1;i>1;i--)
	{	//������� �� �������� � �����
		unsigned short c=rtb->Text[i];
		if(rtb->Text[i]==48 || rtb->Text[i]==49) //���� ������ "0" ��� "1"
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

//������ ������������
Void Form1::button3_Click(System::Object^  sender, System::EventArgs^  e) 
{ 
	int sme=0;
	if(richTextBox1->Text!="")
	{
		richTextBox3->Text=WriteDecode(byt,couWord); //����� ������� WriteCode ��� �������������
		InsertSpace2(richTextBox3); //��������� �� �����, �������� �������

		for(int i=0;i<richTextBox3->Text->Length;i++) //���������� � ��������� �� ������������ ������
		{
			if(richTextBox3->Text[i]==32 && richTextBox3->Text[i+1]==32 && (richTextBox3->Text[i+2]==48 || richTextBox3->Text[i+2]==49)) 
				//����� 2 ������� ����� �������
			{
				sme+=2; 
				i+=2;
			}
			richTextBox3->Select(i,1);
			if(richTextBox3->Text[i]!=eterr[i-sme] || richTextBox3->Text[i]!=ettxt[i-sme]) //������� ���
				richTextBox3->SelectionColor = System::Drawing::Color::Red;			
			else	richTextBox3->SelectionColor = System::Drawing::Color::Black;		
		}
		richTextBox3->SelectionLength=0;
		
		textBox4->Text=WriteText();	
	}
	else 
	{	
		MessageBox::Show( "����������� ������ ��� �������������",	"��������", 
		System::Windows::Forms::MessageBoxButtons::OK,System::Windows::Forms::MessageBoxIcon::Error );
	}
		
}

//��� ����������� �� ��������
System::String ^ Form1::EncodeHemming(System::String ^str) //�������� - �������� ���������
{
	System::String ^res;  //��� ������ ���������

	couWord=str->Length*16/m;					//���������� �������
	if(str->Length*16 % m)
		couWord++;				

	bytSize = couWord * (lenc);      // ������ ������� ��� �������� �������
	CreateClearArray(bytSize);		//�������� ������� ��� �������� �������
					 
	for(int i=0, j=0;i<str->Length;i++,j+=2)  //j+=2 ������ ������ �� 2 �����
	{
		if(!((j+1) % (lenc)))j++;					
			*(wchar_t *)&byt[j]=str[i];		 //���������� ������� � �������� ����
	}
								
	for(unsigned int i=0;i<couWord;i++)
		EncodeWord(&byt[(k+2)*i]);			//�����������
					 
	res=WriteCode(byt,couWord);			//������ (����� ����) �� ������ � ������
									
	return res;
}

//����� ������������ ��� ������ ��������� ����
Void Form1::BitStringToArray(System::String ^str) //������� ������ ������������� � ��������� ������
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
			ctrl=split[i]->Substring(n+4,1);	//����������� ������ � ������
			if(ctrl=="�") couWord++;
			else  
			{	
				MessageBox::Show( "������, �� ��������� ���������� ��������",	"��������", 
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
			ctrl=split[a]->Substring(n+4,1);	//����������� ������ � ������
			if(ctrl=="�") 
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

//�������� ������� � ���������� ������
Void Form1::CreateClearArray(int size)
{
	delete[] byt;
	byt=new unsigned char[size];
	for(int i=0;i<size;i++)byt[i]=0;
}

//����� ��������� ������
System::String ^ Form1::WriteText()
{
	System::String ^res;

		for(unsigned int j=0;j<bytSize-1;j+=2){
						if(!((j+1) % 9))j++;			//������� ���� (�����������) ������������
						res+=*(wchar_t *)&byt[j];
					}				
	return res;
}

// ��������� ��� ������ �� �����������
Void Form1::Check(unsigned int couWord)
{ 
	pW=0;							
	for(unsigned int i=0;i<couWord;i++)
	{
			pW++;					
			CheckWord(&byt[(k+2)*i]); //����� ������� CheckWord ��� �������� �� �������� � �������� �� ������
	}
}

//
Void Form1::CheckWord(unsigned char *pBlock) //�������� ������������� ������
{		
	unsigned char j=0, c=0, M, *pBlock0=pBlock;
	Sndr=0;		//��������� ��������� ��������

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
				if(h && matr[j*(k+1)+i]) Sndr^=M;	//���������� ��������� � ��������
				j++;			
				c <<= 1;
			}
		}
		//�������� ���� ���������
	}
	Analiz1(Sndr);
}


Void Form1::Analiz1(unsigned char Sndr) //������ �� ������� ������
{	
	System::String ^na="����� "+System::Convert::ToString(pW)+": ";
		if(Sndr>143) na+="������� ������. �� ��������������.";
		else 
		{		
			pR=Get_Rank_bySndr(Sndr);
			if(pR==255) na+="������ �� ����������.";
			else if(pR==0) na+="������� ������. �� ��������������.";
				 else
				 {
						Invertor(pW,pR); //����� � ����� ����
						na+="������ � ������� "+System::Convert::ToString(pR)+". ����������.";
				 }
		}
	textBox2->Text+=na+"\r\n";
}

Void Form1::Invertor(unsigned int pW,unsigned char pR) // ����������� ������
{
	pW--; pR--;	
	unsigned char pByt=pR>>3;		//������������� �������
	unsigned char pBit=pR & 0x07;	//������� �� �������
	unsigned char M=0x80>>pBit;	

	unsigned char c=byt[lenc*pW+pByt];
			
	c^=M;
	byt[lenc*pW+pByt]=c; 
}


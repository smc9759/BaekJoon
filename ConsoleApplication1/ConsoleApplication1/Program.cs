using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApplication1
{

    // 어떤 요소 타입도 받아들 일 수 있는
    // 스택 클래스를 C# 제네릭을 이용하여 정의
    class MyStack<T>
    {
        T[] _elements;
        int pos = 0;

        public MyStack()
        {
            _elements = new T[100];
        }

        public void Push(T element)
        {
            _elements[++pos] = element;
        }

        public T Pop()
        {
            return _elements[pos--];
        }
    }


    class CSVar
    {
        int globalVar;
        const int MAX = 1024;

        public void Method1()
        {
            int localVar;

            localVar = 100;

            Console.WriteLine(globalVar);
            Console.WriteLine(localVar);
        }
        const int MAX_VALUE = 1024;

        // readonly 필드 
        readonly int Max;
        public CSVar()
        {
            Max = 1;
        }
    }
    class Program
    {
        [Flags]
        enum Border
        {
            None = 0,
            Top = 1,
            Right = 2,
            Bottom = 4,
            Left = 8
        }
        struct MyPoint
        {
            public int X;
            public int Y;

            public MyPoint(int x, int y)
            {
                this.X = x;
                this.Y = y;
            }

            public override string ToString()
            {
                return string.Format("({0}, {1})", X, Y);
            }
        }
        enum City
        {
            Seoul,   // 0
            Daejun,  // 1
            Busan = 5,  // 5
            Jeju = 10   // 10
        }

        static void Main(string[] args)
        {
string connStr = "Data Source=(local);Integrated Security=true;";
string sql = "SELECT COUNT(1) FROM sys.objects";
SqlConnection conn = null; 
try
{
    conn = new SqlConnection(connStr);
    conn.Open();
    SqlCommand cmd = new SqlCommand(sql, conn);
    object count = cmd.ExecuteScalar();
    Console.WriteLine(count);                
}
catch (SqlException ex)
{
    Console.WriteLine(ex.Message);
}
finally
{
    if (conn != null && 
        conn.State == System.Data.ConnectionState.Open)
    {
        conn.Close();
    }
}
        }
    }
}

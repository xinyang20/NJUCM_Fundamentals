/********* Begin *********/
class Rectangle
{
    //�ڴ˴�ʵ��Rectangle��
    private:
    	int height;
    	int width;
    public:
    	void Set(int h,int w){
    		height=h;
    		width=w;
		}
    	int GetArea(){
    		return width*height;
		}
    

    
};
/********* End *********/

Rectangle GetRect(int h,int w)
{
    /********* Begin *********/
    //����һ�� h*w �� Rectangle ����
    Rectangle p;
    p.Set(h,w);
    return p;
    
    
    /********* End *********/
}

int GetRectArea(Rectangle rect)
{
    /********* Begin *********/
    //���� rect ��������
    return rect.GetArea();
    
    
    /********* End *********/
}



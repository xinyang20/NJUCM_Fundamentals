/********* Begin *********/
class Rectangle
{
    //在此处实现Rectangle类
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
    //返回一个 h*w 的 Rectangle 对象
    Rectangle p;
    p.Set(h,w);
    return p;
    
    
    /********* End *********/
}

int GetRectArea(Rectangle rect)
{
    /********* Begin *********/
    //返回 rect 对象的面积
    return rect.GetArea();
    
    
    /********* End *********/
}



namespace game_framework {
	/////////////////////////////////////////////////////////////////////////////
	// �o��class���ѷ|�@���u�����y
	// �����N�i�H��g���ۤv���{���F
	/////////////////////////////////////////////////////////////////////////////
	//create ball - T6
	class CBouncingBall
	{
	public:
		CBouncingBall();
		void LoadBitmap();		// ���J�ϧ�
		void OnMove();			// ����
		void OnShow();			// �N�ϧζK��e��
		void SetFloor(int);			//set �u�^��������
		void SetXY(int, int);	//set defalt rise location
		void SetVeLocity(int);	//set defalt rise rate

	private:
		int x, y;				// �ϧήy��
		int floor;				// �a�O��Y�y��
		bool rising;			// true��W�ɡBfalse��U��
		int initial_velocity;	// ��l�t��
		int velocity;			// �ثe���t��(�I/��)
		CAnimation animation;	// �Q�ΰʵe�@�ϧ�
	};
}
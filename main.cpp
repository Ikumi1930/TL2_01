#include <cstdio>
#include <cstdlib>
#include "TextureConverter.h"
#include "Windows.h"
#include <cassert>

//コマンドライン引数
enum Argument {
	kApplicationPath,	//アプリケーションのパス
	kFilePath,			//渡されたファイルのパス

	NumArgument			
};

int main(int argc, char* argv[])
{
	assert(argc <= NumArgument);//argcの数がNumArgmentより同じ以下であることを確認

	//COMライブラリの初期化
	HRESULT hr = CoInitializeEx(nullptr, COINIT_MULTITHREADED);
	assert(SUCCEEDED(hr));

	//テクスチャコンバーター
	TextureConverter converter;

	//テクスチャ変換
	converter.ConvertTextureWICToDDS(argv[kFilePath]);

	//COMライブラリの終了
	CoUninitialize();

	system("pause");

	return 0;
}
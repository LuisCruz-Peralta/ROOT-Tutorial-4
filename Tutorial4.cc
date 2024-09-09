void Tutorial4(){
  
  TGraph *gr = new TGraph();
  gr->SetMarkerStyle(kFullCircle); //Cambia el estilo del punto en la grafica 
  
  gr->SetTitle("Graph");
  gr->GetXaxis()->SetTitle("X values");
  gr->GetYaxis()->SetTitle("Y values");
  
  fstream file;
  file.open("data2.txt",ios::in);
  
  while(1)
  {
      double x,y;
      file >> x >> y ; //Lee dos datos por linea en el .txt
      gr->SetPoint(gr->GetN(),x,y); //Funcion que se usa si no se conoce el numero de datos
      if(file.eof()) break;
  }
  file.close();
  TCanvas *c1 = new TCanvas(); 
  gr->Draw("ALP"); //Cambia el tipo de punto en la grafica
  }

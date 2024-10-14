#include <iostream>
#include <string>
#include <vector>
#include <TApplication.h>
#include <TCanvas.h>
#include <TH1F.h>
#include <TGraph.h>
#include <TMultiGraph.h>
#include <TF1.h>

void plotHistogram() {
    // Create a canvas
    TCanvas *c1 = new TCanvas("c1", "Histogram Example", 800, 600);

    // Create a 1D histogram
    TH1F *hist = new TH1F("hist", "Histogram;X axis;Y axis", 50, -4, 4);

    // Fill the histogram with random numbers
    hist->FillRandom("gaus", 1000);

    // Set style
    hist->SetLineColor(kBlue);
    hist->SetFillColor(kRed);

    // Draw the histogram
    hist->Draw();
    
    // Display the plot
    c1->Update();
}

void plotCurve() {
    // Create a canvas
    TCanvas *c2 = new TCanvas("c2", "Curve Example", 800, 600);

    // Create a TF1 function to represent a curve
    TF1 *func = new TF1("func", "sin(x) / x", -10, 10);

    // Set style
    func->SetLineColor(kGreen);

    // Draw the curve
    func->Draw();

    // Display the plot
    c2->Update();
}

void plotPoints() {
    // Create a canvas
    TCanvas *c3 = new TCanvas("c3", "Points Example", 800, 600);

    // Generate some example points
    const int n = 10;
    double x[n] = {-1, 0, 1, 2, 3, 4, 5, 6, 7, 8};
    double y[n] = {1, 4, 9, 16, 25, 36, 49, 64, 81, 100};

    // Create a TGraph to plot the points
    TGraph *graph = new TGraph(n, x, y);
    graph->SetTitle("Points;X axis;Y axis");

    // Set style
    graph->SetMarkerStyle(21);
    graph->SetMarkerColor(kRed);

    // Draw the points
    graph->Draw("AP");

    // Display the plot
    c3->Update();
}

int main(int argc, char **argv) {
    TApplication app("ROOT Application", &argc, argv);

    std::string plotType;
    std::cout << "Select the type of plot you want to generate (histogram, curve, points): ";
    std::cin >> plotType;

    if (plotType == "histogram") {
        plotHistogram();
    } else if (plotType == "curve") {
        plotCurve();
    } else if (plotType == "points") {
        plotPoints();
    } else {
        std::cout << "Invalid option!" << std::endl;
    }

    // Run the application
    app.Run();

    return 0;
}

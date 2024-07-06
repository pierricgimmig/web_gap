#include "triangle_app.h"

#include "imgui.h"

namespace web_gpu_app {

TriangleApp::TriangleApp(wgpu::Instance instance, wgpu::Device device) {
  renderer_ = std::make_unique<WebGpuRenderer>(instance, device, window_);
}

TriangleApp::~TriangleApp() {}

const char* TriangleApp::GetTitle() { return "Triangle App"; }

Renderer* TriangleApp::GetRenderer() { return renderer_.get(); }

Renderables TriangleApp::Update() {
  ImGui::ShowDemoWindow();
  return {};
}

}  // namespace web_gpu_app

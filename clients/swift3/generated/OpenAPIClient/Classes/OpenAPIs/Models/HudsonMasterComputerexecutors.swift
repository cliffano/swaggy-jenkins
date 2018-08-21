//
// HudsonMasterComputerexecutors.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class HudsonMasterComputerexecutors: JSONEncodable {

    public var currentExecutable: FreeStyleBuild?
    public var idle: Bool?
    public var likelyStuck: Bool?
    public var number: Int32?
    public var progress: Int32?
    public var _class: String?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["currentExecutable"] = self.currentExecutable?.encodeToJSON()
        nillableDictionary["idle"] = self.idle
        nillableDictionary["likelyStuck"] = self.likelyStuck
        nillableDictionary["number"] = self.number?.encodeToJSON()
        nillableDictionary["progress"] = self.progress?.encodeToJSON()
        nillableDictionary["_class"] = self._class

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}


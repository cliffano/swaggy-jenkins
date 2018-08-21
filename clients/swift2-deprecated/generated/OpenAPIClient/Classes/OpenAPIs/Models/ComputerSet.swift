//
// ComputerSet.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComputerSet: JSONEncodable {
    public var _class: String?
    public var busyExecutors: Int32?
    public var computer: [HudsonMasterComputer]?
    public var displayName: String?
    public var totalExecutors: Int32?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["_class"] = self._class
        nillableDictionary["busyExecutors"] = self.busyExecutors?.encodeToJSON()
        nillableDictionary["computer"] = self.computer?.encodeToJSON()
        nillableDictionary["displayName"] = self.displayName
        nillableDictionary["totalExecutors"] = self.totalExecutors?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
